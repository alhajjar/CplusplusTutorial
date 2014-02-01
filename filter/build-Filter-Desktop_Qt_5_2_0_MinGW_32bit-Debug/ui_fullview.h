/********************************************************************************
** Form generated from reading UI file 'fullview.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLVIEW_H
#define UI_FULLVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Fullview
{
public:
    QLabel *full_view_2;

    void setupUi(QDialog *Fullview)
    {
        if (Fullview->objectName().isEmpty())
            Fullview->setObjectName(QStringLiteral("Fullview"));
        Fullview->resize(970, 579);
        Fullview->setSizeGripEnabled(false);
        Fullview->setModal(false);
        full_view_2 = new QLabel(Fullview);
        full_view_2->setObjectName(QStringLiteral("full_view_2"));
        full_view_2->setGeometry(QRect(5, 2, 961, 571));
        full_view_2->setMaximumSize(QSize(961, 571));

        retranslateUi(Fullview);

        QMetaObject::connectSlotsByName(Fullview);
    } // setupUi

    void retranslateUi(QDialog *Fullview)
    {
        Fullview->setWindowTitle(QApplication::translate("Fullview", "Dialog", 0));
        full_view_2->setText(QApplication::translate("Fullview", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Fullview: public Ui_Fullview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLVIEW_H
