// Bai5_DiemXepHang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Xep Hang Diem So Hoc Luc\n";
    double diem;
    cout << "Nhap diem: "; cin >> diem;
    
    if (diem <= 1)
    {
        cout << "Kem";
    }
    else if (diem <= 4) {
        cout << "Yeu";
    }
    else if (diem = 5) {
        cout << "Trung Binh";
    }
    else if (diem <= 8) {
        cout << "Kha";
    }
    else if (diem = 9) {
        cout << "Gioi";
    }
    else if (diem = 10) {
        cout << "Xuat Sac";
    }
    return 0;
}