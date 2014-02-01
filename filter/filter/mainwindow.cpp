#include "mainwindow.h"
#include "ui_mainwindow.h"


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
   // cvReleaseImage(&result);
}


void MainWindow::on_actionOpen_triggered()
{

    QString Filename = QFileDialog::getOpenFileName(this,"Open Image","D:/","JPEG(*.JPG);;all(*.*)");
     Nom = Filename.toUtf8().constData();
     image = imread(Nom,CV_LOAD_IMAGE_COLOR);
     IplImage *pict = new IplImage(image);

     QSize desiredsize = ui->Preview->size(); // or any of the size you want
     IplImage *dst = cvCreateImage(cvSize( desiredsize.width(), desiredsize.height() ), pict->depth, pict->nChannels );

       cvResize(pict, dst, CV_INTER_AREA );
       result = pict;

       iplim.IplImagetoQImage(dst);
       ///////////////////////////////////////////
       /* multithreading */
       ///////////////////////////////////////////
//       thread_group thgroup;
//       thgroup.create_thread(boost::bind(&IplImage2Qimage::IplImagetoQImage,&iplim,dst));// iplim.IplImagetoQImage(dst);
//       thgroup.join_all();
       //////////////////////////////////////////////////////////////////////////////////////////////////////////
             QImage *qim = iplim.get_qimage();
     ui->original->setPixmap(QPixmap::fromImage(*qim));
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
       double a[256]={  1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                        1, 1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1};

            for (int i =0 ;i<256 ; i++){
                a[i] = a[i]/256;
            }
       filter.ImFilter(iplImg, imgfiltred, a, 16,16);
}
        if(ui->Laplacien->isChecked()){
            double a[9]={  0,  1 , 0,
                           1, -4,  1,
                           0,  1 , 0 };
    filter.ImFilter(iplImg, imgfiltred, a, 3,3);

        }
        if(ui->High_3->isChecked()){
            double a[9]={  -1, -1, -1,
                           -1, 8 , -1,
                           -1, -1, -1 };
                filter.ImFilter(iplImg, imgfiltred, a, 3,3);

        }

        if(ui->V_gradient_3->isChecked()){
            double a[9]={   -1, 1, 0,
                           -1, 1, 0,
                            -1, 1,0 };

                filter.ImFilter(iplImg, imgfiltred, a, 3,3);
        }

        if(ui->H_gradient_3->isChecked()){
            double a[9]={  0, 0, 0,
                           1, 1 , 1,
                           -1, -1, -1 };
                filter.ImFilter(iplImg, imgfiltred, a, 3,3);
        }
        if(ui->V_sobel->isChecked()){
            double a[9]={  -1, 0, 1,
                           -2, 0, 2,
                           -1, 0, 1 };
                 filter.ImFilter(iplImg, imgfiltred, a, 3,3);
        }

        if(ui->H_sobel->isChecked()){
            double a[9]={  1, 2, 1,
                           0, 0, 0,
                           -1, -2, -1 };
                 filter.ImFilter(iplImg, imgfiltred, a, 3,3);

        }
        if(ui->H_prewitt->isChecked()){
            double a[9]={  1, 1, 1,
                           0, 0, 0,
                           -1, -1, -1 };
                filter.ImFilter(iplImg, imgfiltred, a, 3,3);

        }
        if(ui->v_prewitt->isChecked()){
            double a[9]={  -1, 0, 1,
                           -1, 0, 1,
                           -1, 0, 1 };
                filter.ImFilter(iplImg, imgfiltred, a, 3,3);

        }

        if(ui->Sharpen->isChecked()){
            double a[9]={  -1, -1, -1,
                           -1, 9, -1,
                           -1, -1, -1  };
                filter.ImFilter(iplImg, imgfiltred, a, 3,3);

        }

//        if(ui->Flou->isChecked()){
//            while (it!= 20){
//            cvSmooth(iplImg, imgfiltred, CV_BLUR);
//            it++;
//            }
//}
            if(ui->Rehausseur->isChecked()){
                double a[9]={  1, -3, 1,
                               -3, 9 , -3,
                               1, -3, 1 };

                    filter.ImFilter(iplImg, imgfiltred, a, 3,3);
            }

            if(ui->FeiChen->isChecked()){
                double a[9]={  -1, -1, 0,
                               -1, 0 , 1,
                               0, 1, 1 };

                    filter.ImFilter(iplImg, imgfiltred, a, 3,3);            }



        if(ui->Default->isChecked()){


               imgfiltred = iplImg;
              // cvReleaseImage(&iplImg);


        }

        result = imgfiltred;
       // cvReleaseImage(&iplImg);
        IplImage *dst = cvCreateImage(cvSize( desiredsize.width(), desiredsize.height() ), result->depth, result->nChannels );
          cvResize(result, dst, CV_INTER_AREA );
          ////////////////////////////////////////////////////////////////////////////
          /* pointeur sur fonction*/
          void (IplImage2Qimage::*ptr)(IplImage *) = &IplImage2Qimage::IplImagetoQImage ;//création d'un pointeur sur la fonction IplImagetoQImage
           (iplim.*ptr)(dst);
          ///////////////////////////////////////////////////////////////////////////
          cvReleaseImage(&dst);

          QImage *qim = iplim.get_qimage();
        ui->Preview->setPixmap(QPixmap::fromImage(*qim));
    }
}

void MainWindow::on_FullView_clicked()
{
      full = new Fullview;
      QSize size(result->width,result->height) ;
      full->resize(size);
      full->display(result);
      full->exec();

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


