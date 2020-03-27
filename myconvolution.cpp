// myconvolution.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    cv::Mat bluedst;
    cv::Mat GaudstX, GaudstY;
    cv::Mat sobeldst;
    double signX = 0.6;
    double signY = 0.4;
    cv::Mat src = imread("D:\\opencv\\myproject\\timg.jpg");
    if (!src.data)
    {
        printf("Can't get the picture");
        return -1;
    }

    blur(src, bluedst, Size(3, 3), Point(-1, -1));
    GaussianBlur(src, GaudstX, Size(5, 5), signX, signY);
    //GaussianBlur(src, GaudstX, Size(5, 5), 0,0.6 );
    Sobel(src, sobeldst, CV_8U, 2, 0, 3, 1, 0);

    imshow("src", src);
    imshow("bluedst", bluedst);
    imshow("gaudstX", GaudstX);
    //imshow("Gaudsty", GaudstY);
    imshow("sobeldst", sobeldst);

    waitKey(0);
    return -1;

}

void smoothface()
{

}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
