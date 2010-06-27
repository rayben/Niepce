#ifndef NIEPCEMAIN_H
#define NIEPCEMAIN_H

#include <QMainWindow>

namespace Ui {
    class NiepceMain;
}

class NiepceMain : public QMainWindow {
    Q_OBJECT
public:
    NiepceMain(QWidget *parent = 0);
    ~NiepceMain();

private slots:
    void on_action_Libraries_triggered();
    void on_action_Preferences_triggered();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::NiepceMain *ui;
    void createDatabases();
};

#endif // NIEPCEMAIN_H
