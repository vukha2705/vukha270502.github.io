#include<iostream>
#include<cstring>
#include<cmath>
#include<string>
#include<cstdio>
#include<vector>
#include <iomanip>
using namespace std;

struct ThueBao {
	string mtb;
	string hoten;
	int ngaydk;
	int thangdk;
	int namdk;
	int sdt;
	string thuebao;
	int tgnoi;
	int tgngoai;
};

void Nhap(vector<ThueBao>& danhsach) {
	ThueBao tb;
	cin >> tb.mtb;
	cin.ignore();
	getline(cin, tb.hoten);
	cin >> tb.ngaydk >> tb.thangdk >> tb.namdk;
    cin.ignore();
	cin >> tb.sdt;
    cin >> tb.thuebao;
	cin >> tb.tgnoi >> tb.tgngoai;
	danhsach.insert(danhsach.begin(),tb);
}
void Xuat(const vector<ThueBao>& danhSach, int namDangKi) {
    bool found = false; // Biến đánh dấu đã tìm thấy ít nhất một thuê bao sau năm đăng kí
    for (int i = danhSach.size(); i >= 0;i--) {
        const ThueBao&tb = danhSach[i];
        if (tb.namdk > namDangKi) {
            cout << tb.mtb << " - ";
            cout << tb.hoten << " - ";
            cout << tb.ngaydk << "/" << tb.thangdk << "/" << tb.namdk << " - ";
            cout << setw(10) << setfill('0') <<  tb.sdt << " - ";
            if (tb.thuebao == "TT") {
                cout << "Tra Truoc - ";
            } else if (tb.thuebao == "TS") {
                cout << "Tra Sau - ";
            }
            cout << tb.tgnoi << " - " << tb.tgngoai << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Not Found" << endl;
    }
}


int DemLoaiThueBao(const vector<ThueBao>& danhSach, const string& loaiThueBao) {
    int count = 0;
    for (const ThueBao& tb : danhSach) {
        if (tb.thuebao == loaiThueBao) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<ThueBao> danhSach;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        Nhap(danhSach);
    }

    int soLuongTraTruoc = DemLoaiThueBao(danhSach, "TT");
    int soLuongTraSau = DemLoaiThueBao(danhSach, "TS");

    cout << soLuongTraTruoc << endl;
    cout << soLuongTraSau << endl;

    return 0;
}
