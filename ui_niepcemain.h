/********************************************************************************
** Form generated from reading UI file 'niepcemain.ui'
**
** Created: Sun Jun 27 01:34:30 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NIEPCEMAIN_H
#define UI_NIEPCEMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NiepceMain
{
public:
    QAction *actionE_xit;
    QAction *action_Libraries;
    QAction *action_Preferences;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NiepceMain)
    {
        if (NiepceMain->objectName().isEmpty())
            NiepceMain->setObjectName(QString::fromUtf8("NiepceMain"));
        NiepceMain->resize(600, 400);
        actionE_xit = new QAction(NiepceMain);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        action_Libraries = new QAction(NiepceMain);
        action_Libraries->setObjectName(QString::fromUtf8("action_Libraries"));
        action_Preferences = new QAction(NiepceMain);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        centralWidget = new QWidget(NiepceMain);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        NiepceMain->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NiepceMain);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        NiepceMain->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NiepceMain);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        NiepceMain->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NiepceMain);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        NiepceMain->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menu_File->addAction(actionE_xit);
        menu_Edit->addAction(action_Libraries);
        menu_Edit->addAction(action_Preferences);

        retranslateUi(NiepceMain);
        QObject::connect(actionE_xit, SIGNAL(triggered()), NiepceMain, SLOT(close()));

        QMetaObject::connectSlotsByName(NiepceMain);
    } // setupUi

    void retranslateUi(QMainWindow *NiepceMain)
    {
        NiepceMain->setWindowTitle(QApplication::translate("NiepceMain", "NiepceMain", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("NiepceMain", "E&xit", 0, QApplication::UnicodeUTF8));
        action_Libraries->setText(QApplication::translate("NiepceMain", "&Libraries", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("NiepceMain", "&Preferences", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("NiepceMain", "&File", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("NiepceMain", "&Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NiepceMain: public Ui_NiepceMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NIEPCEMAIN_H
