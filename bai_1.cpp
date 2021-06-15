// bai_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Bài 1: Tạo 1 file có 2 giá trị a và b lấy dữ liệu từ file ra để tính:
a + b, a - b, a * b, a /b*/
// chu y : doi voi file chua gia tri a,b trong bai nay thi 2 so a,b chi co 1 chu so vi du a=8,b=2
#include <iostream>
#include<fstream>
#include <cstdlib>
using namespace std;
int main()
{
    fstream f;
    int a, b, i = 0;
    char mang1[10];//chua gia tri so a
    char mang2[10];//chua gia tri so b
    f.open("D:\\data\\input.txt", ios::in);
    while (!f.eof())
    {
        if (i == 0)
        {
            f >> mang1;
        }
        else
        {
            f >> mang2;
        }
        i = 1;
    }
    f.close();
    a = atoi(mang1);
    b = atoi(mang2);
   // gan gia tri doc duoc tu file vao bien a va b
    cout << " tong 2 gia tri a + b = " << (a + b) << "\n";
    cout << " hieu 2 gia tri a - b = " << (a - b) << "\n";
    cout << " tich 2 gia tri a * b = " << (a * b) << "\n";
    cout << " thuong 2 gia tri a / b = " << (a / b) << "\n";
    return 0;
}

