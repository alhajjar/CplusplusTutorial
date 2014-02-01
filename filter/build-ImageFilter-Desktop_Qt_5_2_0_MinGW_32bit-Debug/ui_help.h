/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QLabel *label_12;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_11;
    QPushButton *pushButton;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(906, 387);
        label_12 = new QLabel(Help);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 310, 901, 31));
        label_3 = new QLabel(Help);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 50, 881, 31));
        label_2 = new QLabel(Help);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 20, 881, 31));
        label_5 = new QLabel(Help);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 110, 891, 31));
        label_9 = new QLabel(Help);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 220, 901, 31));
        label_4 = new QLabel(Help);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 80, 891, 31));
        label_10 = new QLabel(Help);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 250, 901, 31));
        label_8 = new QLabel(Help);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 190, 901, 31));
        label = new QLabel(Help);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -10, 881, 31));
        label_6 = new QLabel(Help);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 140, 901, 31));
        label_7 = new QLabel(Help);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 170, 891, 31));
        label_11 = new QLabel(Help);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 280, 901, 31));
        pushButton = new QPushButton(Help);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 350, 99, 27));

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Dialog", 0));
        label_12->setText(QApplication::translate("Help", "text", 0));
        label_3->setText(QApplication::translate("Help", "text", 0));
        label_2->setText(QApplication::translate("Help", "text", 0));
        label_5->setText(QApplication::translate("Help", "text", 0));
        label_9->setText(QApplication::translate("Help", "text", 0));
        label_4->setText(QApplication::translate("Help", "text", 0));
        label_10->setText(QApplication::translate("Help", "text", 0));
        label_8->setText(QApplication::translate("Help", "text", 0));
        label->setText(QApplication::translate("Help", "text", 0));
        label_6->setText(QApplication::translate("Help", "text", 0));
        label_7->setText(QApplication::translate("Help", "text", 0));
        label_11->setText(QApplication::translate("Help", "text", 0));
        pushButton->setText(QApplication::translate("Help", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
