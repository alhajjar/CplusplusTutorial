#ifndef IPLIMAGE2QIMAGE_H
#define IPLIMAGE2QIMAGE_H

#include <QMainWindow>
#include "opencv2/opencv.hpp"
#include <opencv/cv.h>



using namespace std;
using namespace cv;

class IplImage2Qimage
{
public:
    IplImage2Qimage();
    ~IplImage2Qimage();
    void  IplImagetoQImage(IplImage *iplImg);
    QImage* get_qimage();


private:
 QImage *qimg;
};

#endif // IPLIMAGE2QIMAGE_H
