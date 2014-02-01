#include "iplimage2qimage.h"

IplImage2Qimage::IplImage2Qimage()
{
}

IplImage2Qimage::~IplImage2Qimage()
{
}

void IplImage2Qimage::IplImagetoQImage(IplImage *iplImg)
{
    int h = iplImg->height;
    int w = iplImg->width;
    int channels = iplImg->nChannels;
    QImage* qim =   new QImage(w, h, QImage::Format_ARGB32);
    qimg = qim;
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
   // return qimg;
}

 QImage* IplImage2Qimage::get_qimage(){
     return qimg;
 }
