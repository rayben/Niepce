#ifndef LIBRARIESFORM_H
#define LIBRARIESFORM_H

#include <QDialog>

namespace Ui {
    class LibrariesForm;
}

class LibrariesForm : public QDialog {
    Q_OBJECT
public:
    LibrariesForm(QWidget *parent = 0);
    ~LibrariesForm();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::LibrariesForm *ui;

private slots:
    void on_addButton_clicked();
    void on_okButton_clicked();
};

#endif // LIBRARIESFORM_H
