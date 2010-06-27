/********************************************************************************
** Form generated from reading UI file 'librariesform.ui'
**
** Created: Sun Jun 27 01:34:30 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIESFORM_H
#define UI_LIBRARIESFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_LibrariesForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *addButton;
    QPushButton *removeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QListWidget *librariesList;

    void setupUi(QDialog *LibrariesForm)
    {
        if (LibrariesForm->objectName().isEmpty())
            LibrariesForm->setObjectName(QString::fromUtf8("LibrariesForm"));
        LibrariesForm->resize(400, 300);
        gridLayout = new QGridLayout(LibrariesForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        addButton = new QPushButton(LibrariesForm);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        gridLayout->addWidget(addButton, 1, 0, 1, 1);

        removeButton = new QPushButton(LibrariesForm);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        gridLayout->addWidget(removeButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(115, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        okButton = new QPushButton(LibrariesForm);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        gridLayout->addWidget(okButton, 1, 3, 1, 1);

        librariesList = new QListWidget(LibrariesForm);
        librariesList->setObjectName(QString::fromUtf8("librariesList"));

        gridLayout->addWidget(librariesList, 0, 0, 1, 4);


        retranslateUi(LibrariesForm);

        QMetaObject::connectSlotsByName(LibrariesForm);
    } // setupUi

    void retranslateUi(QDialog *LibrariesForm)
    {
        LibrariesForm->setWindowTitle(QApplication::translate("LibrariesForm", "Libraries", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("LibrariesForm", "Add", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("LibrariesForm", "Remove", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("LibrariesForm", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LibrariesForm: public Ui_LibrariesForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIESFORM_H
