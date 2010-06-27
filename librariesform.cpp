#include "librariesform.h"
#include "ui_librariesform.h"
#include "data_Library.h"

#include <QFileDialog>

#include "qdjango/QDjangoWhere.h"
#include "qdjango/QDjango.h"
#include "qdjango/QDjangoQuerySet.h"

LibrariesForm::LibrariesForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LibrariesForm)
{
    ui->setupUi(this);
    ui->librariesList->setSelectionMode(QAbstractItemView::MultiSelection);

    //
    // populate the list
    //
    const QDjangoQuerySet<Library> libraries;
    QDjangoQuerySet<Library> ls = libraries.all();

    for (int i = 0; i < ls.size(); i++)
    {
        ui->librariesList->addItem(ls.at(i)->path());
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

    QList<QListWidgetItem*> items = ui->librariesList->findItems(dir, Qt::MatchExactly);

    if (items.count() == 0)
    {
        Library library;
        library.setPath(dir);
        library.save();

        ui->librariesList->addItem(new QListWidgetItem(dir, ui->librariesList, 0));
        emit libraryAdded(dir);
    }
}

void LibrariesForm::on_removeButton_clicked()
{
    const QDjangoQuerySet<Library> libraries;

    QStringList selectedLibraries;

    foreach (QListWidgetItem *item, ui->librariesList->selectedItems())
    {
        selectedLibraries.append(item->text());
    }

    QDjangoQuerySet<Library> ls = libraries.filter(QDjangoWhere("path", QDjangoWhere::IsIn, selectedLibraries));
    ls.remove();

    qDeleteAll(ui->librariesList->selectedItems());
}
