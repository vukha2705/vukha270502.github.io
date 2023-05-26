
#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    char gioiTinh;
    int ngaySinh;
    int thangSinh;
    int namSinh;
    string lop;
    float diemTB;
};

int main() {
    int n;
    cin >> n;

    SinhVien* dsSV = new SinhVien[n];

    // Nhap thông tin cho danh sách sinh viên
    for (int i = 0; i < n; i++) {
        cin >> dsSV[i].maSV;
        cin.ignore();
        getline(cin, dsSV[i].hoTen);
        cin >> dsSV[i].gioiTinh;
        cin >> dsSV[i].ngaySinh;
        cin >> dsSV[i].thangSinh;
        cin >> dsSV[i].namSinh;
        cin.ignore();
        getline(cin, dsSV[i].lop);
        cin >> dsSV[i].diemTB;
    }

    // Thêm sinh viên mới vào đầu danh sách
    SinhVien svMoi;
    cin >> svMoi.maSV;
    cin.ignore();
    getline(cin, svMoi.hoTen);
    cin >> svMoi.gioiTinh;
    cin >> svMoi.ngaySinh;
    cin >> svMoi.thangSinh;
    cin >> svMoi.namSinh;
    cin.ignore();
    getline(cin, svMoi.lop);
    cin >> svMoi.diemTB;

    // Cập nhật số lượng sinh viên
    n++;
    SinhVien* dsSVMoi = new SinhVien[n];

    // Thêm sinh viên mới vào đầu danh sách
    dsSVMoi[0] = svMoi;

    // Sao chép danh sách cũ sang danh sách mới
    for (int i = 1; i < n; i++) {
        dsSVMoi[i] = dsSV[i - 1];
    }

    // Giải phóng bộ nhớ của danh sách cũ
    delete[] dsSV;

    // Cập nhật danh sách sinh viên
    dsSV = dsSVMoi;

    // Xuất danh sách sinh viên
    for (int i = 0; i < n; i++) {
        cout << dsSV[i].maSV << " - ";
        cout << dsSV[i].hoTen << " - ";
        if (dsSV[i].gioiTinh == 'x') {
            cout << "Nam - ";
        }
        else if (dsSV[i].gioiTinh == 'y') {
            cout << "Nu - ";
        }

        printf("%d/%d/%d - ", dsSV[i].ngaySinh, dsSV[i].thangSinh, dsSV[i].namSinh);
        cout << dsSV[i].lop << " - ";
        printf("%.2f\n", dsSV[i].diemTB);
    }

    // Giải phóng bộ nhớ của danh sách mới
    delete[] dsSVMoi;

    return 0;
}
