#include "filter.h"

Filter::Filter()
{
}

Filter::~Filter()
{
}

void Filter::ImFilter(IplImage *iplImg, IplImage *imgfiltred, double a[], int rows, int cols)
{
CvMat k;
cvInitMatHeader( &k, rows, cols, CV_64FC1, a );

cvFilter2D( iplImg ,imgfiltred, &k,cvPoint(-1,-1));
}
