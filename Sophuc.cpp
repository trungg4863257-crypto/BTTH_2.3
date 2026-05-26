#include <iostream>
#include "SoPhuc.h"
using namespace std;
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}
void SoPhuc::Xuat() {
    cout << iThuc;
    if (iAo >= 0)
        cout << " + " << iAo << "i";
    else
        cout << " - " << -iAo << "i";
}
SoPhuc SoPhuc::Tong(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc + b.iThuc;
    kq.iAo = iAo + b.iAo;
    return kq;
}
SoPhuc SoPhuc::Hieu(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc - b.iThuc;
    kq.iAo = iAo - b.iAo;
    return kq;
}
SoPhuc SoPhuc::Tich(SoPhuc b) {
    SoPhuc kq;
    kq.iThuc = iThuc * b.iThuc - iAo * b.iAo;
    kq.iAo = iThuc * b.iAo + iAo * b.iThuc;
    return kq;
}
SoPhuc SoPhuc::Thuong(SoPhuc b) {
    SoPhuc kq;
    double mau = b.iThuc * b.iThuc + b.iAo * b.iAo;
    kq.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / mau;
    kq.iAo = (iAo * b.iThuc - iThuc * b.iAo) / mau;
    return kq;
}
