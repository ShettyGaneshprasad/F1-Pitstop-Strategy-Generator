#include <cv.h>
#include <highgui.h>

int main()
{
    IplImage *im = cvLoadImage("image.jpg", CV_WINDOW_AUTOSIZE);
    cvNamedWindow("image");
    cvShowImage("image", im);
    cvWaitKey(0);
    cvReleaseImage(&im);
    cvDestroyAllWindows();
}