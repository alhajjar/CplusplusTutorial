#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <QMainWindow>
#include "help.h"
#include "about.h"
#include "iplimage2qimage.h"
#include "filter.h"
#include "fullview.h"
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QString>
#include <QList>
#include <iostream>
//#include<boost/thread.hpp>
//#include<boost/bind.hpp>

//using namespace boost;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:


    void on_actionOpen_triggered();

    void on_Convert_clicked();

    void on_FullView_clicked();

    void on_actionSave_triggered();

    void on_actionExit_triggered();

    void on_actionHelp_triggered();

    void on_actionAbout_triggered();

private:
    string Nom ;
    Ui::MainWindow *ui;
    Mat image ;
    QImage *qimg;
    Help helpwindow;
    About aboutwindow;
    IplImage *result;
    int degre;
    IplImage2Qimage iplim;
    Filter filter;
    Fullview *full;
};

#endif // MAINWINDOW_H
