/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionHelp;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *Convert;
    QPushButton *FullView;
    QLabel *original;
    QLabel *Preview;
    QFrame *frame_2;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QRadioButton *V_gradient_3;
    QRadioButton *Low_3;
    QRadioButton *Sharpen;
    QRadioButton *H_gradient_3;
    QRadioButton *High_3;
    QRadioButton *Laplacien;
    QRadioButton *v_prewitt;
    QRadioButton *H_prewitt;
    QRadioButton *V_sobel;
    QRadioButton *H_sobel;
    QRadioButton *Default;
    QRadioButton *Flou;
    QRadioButton *Rehausseur;
    QRadioButton *FeiChen;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(920, 706);
        MainWindow->setAutoFillBackground(false);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/Images/Open-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/Images/Save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/Images/exit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/Images/help-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon3);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/Images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Convert = new QPushButton(centralWidget);
        Convert->setObjectName(QStringLiteral("Convert"));
        Convert->setGeometry(QRect(810, 160, 99, 27));
        FullView = new QPushButton(centralWidget);
        FullView->setObjectName(QStringLiteral("FullView"));
        FullView->setGeometry(QRect(400, 590, 99, 27));
        original = new QLabel(centralWidget);
        original->setObjectName(QStringLiteral("original"));
        original->setGeometry(QRect(0, 200, 451, 381));
        Preview = new QLabel(centralWidget);
        Preview->setObjectName(QStringLiteral("Preview"));
        Preview->setGeometry(QRect(450, 200, 471, 381));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(450, 200, 471, 381));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 200, 451, 381));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 170, 91, 21));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(630, 180, 81, 17));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        label_2->setFont(font1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 901, 131));
        V_gradient_3 = new QRadioButton(groupBox);
        V_gradient_3->setObjectName(QStringLiteral("V_gradient_3"));
        V_gradient_3->setGeometry(QRect(23, 61, 138, 22));
        Low_3 = new QRadioButton(groupBox);
        Low_3->setObjectName(QStringLiteral("Low_3"));
        Low_3->setGeometry(QRect(23, 33, 94, 22));
        Sharpen = new QRadioButton(groupBox);
        Sharpen->setObjectName(QStringLiteral("Sharpen"));
        Sharpen->setGeometry(QRect(23, 89, 91, 22));
        H_gradient_3 = new QRadioButton(groupBox);
        H_gradient_3->setObjectName(QStringLiteral("H_gradient_3"));
        H_gradient_3->setGeometry(QRect(169, 61, 164, 22));
        High_3 = new QRadioButton(groupBox);
        High_3->setObjectName(QStringLiteral("High_3"));
        High_3->setGeometry(QRect(169, 33, 97, 22));
        Laplacien = new QRadioButton(groupBox);
        Laplacien->setObjectName(QStringLiteral("Laplacien"));
        Laplacien->setGeometry(QRect(169, 89, 91, 22));
        v_prewitt = new QRadioButton(groupBox);
        v_prewitt->setObjectName(QStringLiteral("v_prewitt"));
        v_prewitt->setGeometry(QRect(320, 30, 141, 22));
        H_prewitt = new QRadioButton(groupBox);
        H_prewitt->setObjectName(QStringLiteral("H_prewitt"));
        H_prewitt->setGeometry(QRect(320, 60, 161, 22));
        V_sobel = new QRadioButton(groupBox);
        V_sobel->setObjectName(QStringLiteral("V_sobel"));
        V_sobel->setGeometry(QRect(320, 90, 82, 17));
        H_sobel = new QRadioButton(groupBox);
        H_sobel->setObjectName(QStringLiteral("H_sobel"));
        H_sobel->setGeometry(QRect(460, 30, 101, 17));
        Default = new QRadioButton(groupBox);
        Default->setObjectName(QStringLiteral("Default"));
        Default->setGeometry(QRect(460, 90, 82, 17));
        Flou = new QRadioButton(groupBox);
        Flou->setObjectName(QStringLiteral("Flou"));
        Flou->setGeometry(QRect(460, 60, 82, 17));
        Rehausseur = new QRadioButton(groupBox);
        Rehausseur->setObjectName(QStringLiteral("Rehausseur"));
        Rehausseur->setGeometry(QRect(590, 30, 82, 17));
        FeiChen = new QRadioButton(groupBox);
        FeiChen->setObjectName(QStringLiteral("FeiChen"));
        FeiChen->setGeometry(QRect(590, 60, 82, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 920, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuAbout->addAction(actionHelp);
        menuAbout->addAction(actionAbout);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Filter", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionHelp->setText(QApplication::translate("MainWindow", "Help", 0));
        actionHelp->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0));
        Convert->setText(QApplication::translate("MainWindow", "Convert", 0));
        FullView->setText(QApplication::translate("MainWindow", "FULL View", 0));
        original->setText(QString());
        Preview->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Original", 0));
        label_2->setText(QApplication::translate("MainWindow", "Filtered", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Filters", 0));
        V_gradient_3->setText(QApplication::translate("MainWindow", "Verical gradient", 0));
        Low_3->setText(QApplication::translate("MainWindow", "Low Path", 0));
        Sharpen->setText(QApplication::translate("MainWindow", "Sharpen", 0));
        H_gradient_3->setText(QApplication::translate("MainWindow", "Horizontal gradient", 0));
        High_3->setText(QApplication::translate("MainWindow", "High Path", 0));
        Laplacien->setText(QApplication::translate("MainWindow", "Laplacien", 0));
        v_prewitt->setText(QApplication::translate("MainWindow", "Vertical Prewitt", 0));
        H_prewitt->setText(QApplication::translate("MainWindow", "Horizontal Prewitt", 0));
        V_sobel->setText(QApplication::translate("MainWindow", "Verical Sobel", 0));
        H_sobel->setText(QApplication::translate("MainWindow", "Horizontal Sobel", 0));
        Default->setText(QApplication::translate("MainWindow", "Default", 0));
        Flou->setText(QApplication::translate("MainWindow", "Flou", 0));
        Rehausseur->setText(QApplication::translate("MainWindow", "Rehausseur", 0));
        FeiChen->setText(QApplication::translate("MainWindow", "Frei-Chen", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
