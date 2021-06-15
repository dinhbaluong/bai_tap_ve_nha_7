// bai_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/* Bài 2: Tạo 1 file có tên là array.txt.In các số nguyên từ 0 đến n vào file */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream f;
	int n;
	int mang[50];
	cout << " nhap gia tri n = ";
	cin >> n;
	cout << "\n";
	// gan cac gia tri so nguyen tu 0 -> n  vao mang 
	for (int i = 0; i <= n; i++)
	{
		mang[i] = i;
	}
	// thuc hien mo file va truyen cac gia tri co trong mang vao file
	f.open("D:\\data\\array.txt", ios::out);
	for (int i = 0; i <= n; i++)
	{
		f << mang[i];
	}
	// dong file
	f.close();
	return 0;
}

