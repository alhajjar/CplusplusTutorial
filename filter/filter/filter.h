#ifndef FILTER_H
#define FILTER_H
#include "opencv2/opencv.hpp"
#include <opencv/cv.h>
using namespace std;
using namespace cv;

class Filter
{
public:
    Filter();
    ~Filter();
    void ImFilter(IplImage *iplImg, IplImage *imgfiltred, double a[9], int rows, int cols);
};

#endif // FILTER_H
