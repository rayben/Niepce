#include "librariesform.h"
#include "ui_librariesform.h"
#include <QFileDialog>

#include "qdjango/QDjangoWhere.h"
#include "qdjango/QDjango.h"
#include "qdjango/QDjangoQuerySet.h"

#include "data_Library.h"

LibrariesForm::LibrariesForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibrariesForm)
{
    ui->setupUi(this);

    const QDjangoQuerySet<Library> libraries;
    QDjangoQuerySet<Library> ls = libraries.all();

    for (int i = 0; i < ls.size(); i++)
    {
        ui->librariesList->addItem(new QListWidgetItem(ls.at(i)->path(), ui->librariesList, 0));
    }
}

LibrariesForm::~LibrariesForm()
{
    delete ui;
}

void LibrariesForm::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void LibrariesForm::on_okButton_clicked()
{
    close();
}

void LibrariesForm::on_addButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Select Folder"), "/", QFileDialog::ShowDirsOnly);

    if (dir.isNull() == true)
    {
        return;
    }

    dir = QDir::toNativeSeparators(dir);

    Library library;
    library.setPath(dir);
    library.save();

    ui->librariesList->addItem(new QListWidgetItem(dir, ui->librariesList, 0));
}
