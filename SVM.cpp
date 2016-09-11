# include <opencv2/core/core.hpp>
# include <opencv2/highgui/highgui.hpp>
# include <opencv2/ml/ml.hpp>
# include <iostream>
 
 using namespace cv;
 using namespace std;

 int main(int argc, char **argv)
 {
 // READ IMAGE AND CONVERT TO GRAYSCALE
 	Mat img = imread('argv[1]', CV_LOAD_IMAGE_COLOR);
 		if(!img.data)
 		{
 			cout<<"File not loaded properly";
 			return -1;
 		}
 		else

 		Mat result ;
 		cvtColor(img,result,CV_RGB2GRAY);
 		imwrite("result.jpg",result);
 		namedWindow("DIsplay",WINDOW_AUTOSIZE);
 		imshow("DIsplay",result);



 	
    waitKey(0);
    return 0;


 }
