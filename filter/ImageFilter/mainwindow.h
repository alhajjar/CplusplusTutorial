#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//Include headers for OpenCV Image processing.
#include <opencv2/imgproc/imgproc.hpp>
//Include headers for OpenCV GUI handling.
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cv.h>
#include "help.h"
#include "about.h"


using namespace std;
using namespace cv;

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
};

#endif // MAINWINDOW_H
