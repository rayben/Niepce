#ifndef PREFERENCESFORM_H
#define PREFERENCESFORM_H

#include <QDialog>

namespace Ui {
    class PreferencesForm;
}

class PreferencesForm : public QDialog {
    Q_OBJECT
public:
    PreferencesForm(QWidget *parent = 0);
    ~PreferencesForm();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::PreferencesForm *ui;

private slots:
    void on_okButton_clicked();
};

#endif // PREFERENCESFORM_H
