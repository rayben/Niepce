#include "preferencesform.h"
#include "ui_preferencesform.h"

PreferencesForm::PreferencesForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PreferencesForm)
{
    ui->setupUi(this);
}

PreferencesForm::~PreferencesForm()
{
    delete ui;
}

void PreferencesForm::changeEvent(QEvent *e)
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

void PreferencesForm::on_okButton_clicked()
{
    close();
}
