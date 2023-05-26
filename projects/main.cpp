
#include <iostream>
#include <string>
#include<stdio.h>
using namespace std;

struct BuuKien {
	int maBK;
	string tennguoigui;
	string tennguoinhan;
	float trongluong;
	int ngay;
	int thang;
	int nam;
	string noidung;
	int dongia;
};
void Nhap(BuuKien &bk){
		cin >> bk.maBK;
		cin.ignore();
		getline(cin,bk.tennguoigui);
		getline(cin,bk.tennguoinhan);
		cin >> bk.trongluong;
		cin >> bk.ngay >> bk.thang >> bk.nam;
		cin.ignore();
		getline(cin,bk.noidung);
		cin >> bk.dongia;
}
void xuat(BuuKien bk) {
    printf("%d - %s - %s - %.2f - %d/%d/%d - %s - %d\n", bk.maBK, bk.tennguoigui.c_str(), bk.tennguoinhan.c_str(), bk.trongluong, bk.ngay, bk.thang, bk.nam, bk.noidung.c_str(), bk.dongia);
}

int main() {
    BuuKien bk;
    Nhap(bk);
    xuat(bk);
    return 0;
}
