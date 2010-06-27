/********************************************************************************
** Form generated from reading UI file 'preferencesform.ui'
**
** Created: Fri Jun 25 01:00:36 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESFORM_H
#define UI_PREFERENCESFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QDialog *PreferencesForm)
    {
        if (PreferencesForm->objectName().isEmpty())
            PreferencesForm->setObjectName(QString::fromUtf8("PreferencesForm"));
        PreferencesForm->resize(400, 300);
        gridLayout = new QGridLayout(PreferencesForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        okButton = new QPushButton(PreferencesForm);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        tabWidget = new QTabWidget(PreferencesForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);


        retranslateUi(PreferencesForm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PreferencesForm);
    } // setupUi

    void retranslateUi(QDialog *PreferencesForm)
    {
        PreferencesForm->setWindowTitle(QApplication::translate("PreferencesForm", "Dialog", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("PreferencesForm", "OK", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PreferencesForm", "General", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PreferencesForm", "Files", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreferencesForm: public Ui_PreferencesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESFORM_H
