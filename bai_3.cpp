// bai_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Bài 3: Bài toán sinh viên:
Viết chương trình nhập vào tên sinh viên, điểm trung bình 3 môn toán, lý, hóa từ điểm trung bình 3 môn xếp loại sinh viên đó thuộc loại nào.
- Giới hạn 20 sinh viên 1 lớp.
- Cách xếp loại
Điểm trung bình >= 9 là loại A
Điểm trung bình >= 7 và nhỏ hơn 9 là loại B
Điểm trung bình >= 5 và nhỏ hơn 7 là loại C
Điểm trung binh < 5 là loại D
- Ghi danh sahcs sinh viên đã nhập vào file theo lựa chọn của người dùng
- Sau khi chạy chương trình lần 2 nếu file đã có dữ liệu thì chỉ cần đọc file và in ra màn hình không cần phải ghi lại.*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream f;
    int luachon1,kt=0;
    float toan[20], ly[20], hoa[20];
    float dtb[20];
    char xeploai[20];
    string hovaten[20];
    string line;
    string data;

    // mo file va kiem tra xem trong file co du lieu khong neu co thi doc du lieu 
    f.open("D:\\data\\danh_sach_sinh_vien.txt",ios::in);
    while (!f.eof())// dieu kien lap la trong file co du lieu 
    {
        kt++;
        getline(f, line);
        data += line;
    }
    // dong file
    f.close();
    if (kt > 1)
    {
        cout << data;
    }
    else if (kt == 1)
    {
        for (int i = 0; i < 20; i++)
        {
            // nhap vao ho va ten, diem toan, diem ly, diem hoa hoa //
            cout << " nhap ho va ten : ";
            cin >> hovaten[i];
            cout << "\n";
            cout << "nhap diem toan : ";
            cin >> toan[i];
            cout << "\n";
            cout << "nhap diem ly : ";
            cin >> ly[i];
            cout << "\n";
            cout << "nhap diem hoa : ";
            cin >> hoa[i];
            cout << "\n";
            dtb[i] = (toan[i] + ly[i] + hoa[i]) / 3;
            // xep loai sinh vien 
            if (dtb[i] >= 9)
            {
                xeploai[i] = 'A';
            }
            else if (dtb[i] >= 7 && dtb[i] < 9)
            {
                xeploai[i] = 'B';
            }
            else if (dtb[i] >= 5 && dtb[i] < 7)
            {
                xeploai[i] = 'C';
            }
            else
            {
                xeploai[i] = 'D';
            }
            //xet dieu kien tiep tuc hoac dung nhap thong tin 
            cout << " lua chon :  tiep tuc nhap : nhan so 1 -- hoac -- dung nhap : nhan so 0 : ";
            cin >> luachon1;
            cout << "\n";
            if (luachon1 == 0)
            {
                // mo file va ghi du lieu vao file
                f.open("D:\\data\\danh_sach_sinh_vien.txt", ios::out);
                for (int k = 0; k <= i; k++)
                {
                    f << "ho va ten : " << hovaten[k] << " diem toan : " << toan[k] << " diem ly : " << ly[k] << " diem hoa : " << hoa[k] << " xep loai : " << xeploai[k] << " \n";
                }
                f.close();
                break;
            }
        }
    }
        return 0;
}

