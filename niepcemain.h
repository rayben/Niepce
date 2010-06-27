#ifndef NIEPCEMAIN_H
#define NIEPCEMAIN_H

#include <QMainWindow>
#include <QFileSystemWatcher>

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
    void monitorFolder(QString folder);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::NiepceMain *ui;
    void createDatabases();

private:
    QFileSystemWatcher _watcher;
};

#endif // NIEPCEMAIN_H
