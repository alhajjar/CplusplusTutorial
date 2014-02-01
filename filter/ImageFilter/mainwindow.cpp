#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include <QMessageBox>
#include <QPixmap>
#include <QString>
#include <QList>
#include <iostream>

QImage*  IplImage2QImage(IplImage *iplImg)
{
int h = iplImg->height;
int w = iplImg->width;
int channels = iplImg->nChannels;
QImage *qimg = new QImage(w, h, QImage::Format_ARGB32);
char *data = iplImg->imageData;

    for (int y = 0; y < h; y++, data += iplImg->widthStep)
    {
        for (int x = 0; x < w; x++)
        {
            char r, g, b, a = 0;
            if (channels == 1)
                {
                    r = data[x * channels];
                    g = data[x * channels];
                    b = data[x * channels];
                }
            else if (channels == 3 || channels == 4)
                {
                    r = data[x * channels + 2];
                    g = data[x * channels + 1];
                    b = data[x * channels];
                }

            if (channels == 4)
                {
                    a = data[x * channels + 3];
                    qimg->setPixel(x, y, qRgba(r, g, b, a));//set RGBA value
                }
            else
                {
                    qimg->setPixel(x, y, qRgb(r, g, b));//set rgb value
                }
        }
    }
return qimg;

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    degre = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_actionOpen_triggered()
{
    QString Filename = QFileDialog::getOpenFileName(this,"Open Image","D:/","JPEG(*.JPG);;all(*.*)");
        Nom = Filename.toUtf8().constData();
     image = imread(Nom,CV_LOAD_IMAGE_COLOR);
     IplImage *iplImg = new IplImage(image);

     QSize desiredsize = ui->Preview->size(); // or any of the size you want
     IplImage *dst = cvCreateImage(cvSize( desiredsize.width(), desiredsize.height() ), iplImg->depth, iplImg->nChannels );

       cvResize(iplImg, dst, CV_INTER_AREA );
     QImage *qim = IplImage2QImage(dst);
     ui->original->setPixmap(QPixmap::fromImage(*qim));
     result = iplImg;
}

void MainWindow::on_Convert_clicked()
{
    if (Nom !=""){
    int it = 0;

        image = imread(Nom,CV_LOAD_IMAGE_COLOR);
        IplImage *iplImg = new IplImage(image);

        QSize desiredsize = ui->Preview->size(); // or any of the size you want

     IplImage *imgfiltred = new IplImage(image);


        if ( ui->Low_3->isChecked()){
            double a[9]={  1, 1, 1,
                           1, 4 , 1,
                           1, 1, 1 };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));
}
        if(ui->Laplacien->isChecked()){
            double a[9]={  -1, -1, -1,
                           -1, 8 , -1,
                           -1, -1, -1 };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));

        }
        if(ui->High_3->isChecked()){
            double a[9]={  -1, -1, -1,
                           -1, 8 , -1,
                           -1, -1, -1 };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));


        }

        if(ui->V_gradient_3->isChecked()){
            double a[9]={   -1, 1, 0,
                           -1, 1, 0,
                            -1, 1,0 };

                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));


        }

        if(ui->H_gradient_3->isChecked()){
            double a[9]={  0, 0, 0,
                           1, 1 , 1,
                           -1, -1, -1 };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));


        }
        if(ui->V_sobel->isChecked()){
            double a[9]={  -1, 0, 1,
                           -2, 0, 2,
                           -1, 0, 1 };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));


        }

        if(ui->H_sobel->isChecked()){
            double a[9]={  1, 2, 1,
                           0, 0, 0,
                           -1, -2, -1 };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));


        }
        if(ui->H_prewitt->isChecked()){
            double a[9]={  1, 1, 1,
                           0, 0, 0,
                           -1, -1, -1 };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));


        }
        if(ui->v_prewitt->isChecked()){
            double a[9]={  -1, 0, 1,
                           -1, 0, 1,
                           -1, 0, 1 };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));


        }

        if(ui->Sharpen->isChecked()){
            double a[9]={  -1, -1, -1, -1, 9, -1, -1, -1, -1  };
                CvMat k;
                cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));


        }

        if(ui->Flou->isChecked()){
            while (it!= 20){
            cvSmooth(iplImg, imgfiltred, CV_BLUR);
            it++;
            }

            if(ui->Rehausseur->isChecked()){
                double a[9]={  1, -3, 1,
                               -3, 9 , -3,
                               1, -3, 1 };

                    CvMat k;
                    cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                    cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));
            }

            if(ui->FeiChen->isChecked()){
                double a[9]={  -1, -1, 0,
                               -1, 0 , 1,
                               0, 1, 1 };

                    CvMat k;
                    cvInitMatHeader( &k, 3, 3, CV_64FC1, a );

                    cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));
            }

        }

        if(ui->Default->isChecked()){


               imgfiltred = iplImg;


        }

        result = imgfiltred;
        IplImage *dst = cvCreateImage(cvSize( desiredsize.width(), desiredsize.height() ), iplImg->depth, iplImg->nChannels );
          cvResize(imgfiltred, dst, CV_INTER_AREA );

        QImage *qim = IplImage2QImage(dst);
        ui->Preview->setPixmap(QPixmap::fromImage(*qim));
    }
}

void MainWindow::on_FullView_clicked()
{
    if(Nom!="")
    cvShowImage("converted image",result);
}

void MainWindow::on_actionSave_triggered()
{      if(Nom!=""){
    QString Filename = QFileDialog::getSaveFileName(this,"Image save name","D:/","Jpeg(*.jpg);;TIF(*.tif);;all(*.*)");
       string saveNom = Filename.toUtf8().constData();

       cvSaveImage(saveNom.c_str(),result);
    }
}

void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionHelp_triggered()
{
    helpwindow.exec();
}

void MainWindow::on_actionAbout_triggered()
{
    aboutwindow.exec();
}
