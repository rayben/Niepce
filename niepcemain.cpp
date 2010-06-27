#include "niepcemain.h"
#include "ui_niepcemain.h"
#include "preferencesform.h"
#include "librariesform.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDir>

#include "qdjango/QDjangoModel.h"
#include "qdjango/QDjango.h"
#include "qdjango/QDjangoScript.h"

#include "data_Library.h"

NiepceMain::NiepceMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NiepceMain)
{
    ui->setupUi(this);
}

NiepceMain::~NiepceMain()
{
    delete ui;
}

void NiepceMain::createDatabases()
{
    QDjango::registerModel<Library>();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QDir::homePath() % "/Documents/Niepce";
    QDir dbPath(path);

    QString dbFile = path % "/Niepce.sqlite";

    if (dbPath.exists() == false)
    {
        dbPath.mkdir(path);
    }

    db.setDatabaseName(dbFile);
    db.open();

    QDjango::setDatabase(db);
    QDjango::createTables();
}

void NiepceMain::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);

    switch (e->type())
    {
        case QEvent::LanguageChange:
            ui->retranslateUi(this);
            break;
        default:
            break;
    }
}

void NiepceMain::on_action_Preferences_triggered()
{
    PreferencesForm dialog(this);
    dialog.exec();
}

void NiepceMain::on_action_Libraries_triggered()
{
    LibrariesForm dialog(this);
    dialog.exec();
}
