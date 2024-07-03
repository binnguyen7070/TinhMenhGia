// TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()

#include <iostream>

using namespace std;

int main() {
    // Khai báo biến
    int soTien, to500, to200, to100, to50, to20, to10, to5, to1, tongTo;

    // Nhập số tiền cần đổi
    cout << "Nhập số tiền cần đổi: ";
    cin >> soTien;

    // Tính số tờ mỗi loại mệnh giá
    to500 = soTien / 500;
    soTien %= 500;

    to200 = soTien / 200;
    soTien %= 200;

    to100 = soTien / 100;
    soTien %= 100;

    to50 = soTien / 50;
    soTien %= 50;

    to20 = soTien / 20;
    soTien %= 20;

    to10 = soTien / 10;
    soTien %= 10;

    to5 = soTien / 5;
    soTien %= 5;

    to1 = soTien;

    // Tính tổng số tờ
    tongTo = to500 + to200 + to100 + to50 + to20 + to10 + to5 + to1;

    // In kết quả
    cout << "\nKết quả đổi tiền:\n";
    cout << "Tờ 500: " << to500 << endl;
    cout << "Tờ 200: " << to200 << endl;
    cout << "Tờ 100: " << to100 << endl;
    cout << "Tờ 50: " << to50 << endl;
    cout << "Tờ 20: " << to20 << endl;
    cout << "Tờ 10: " << to10 << endl;
    cout << "Tờ 5: " << to5 << endl;
    cout << "Tờ 1: " << to1 << endl;
    cout << "Tổng số tờ: " << tongTo << endl;

    return 0;
}


        


