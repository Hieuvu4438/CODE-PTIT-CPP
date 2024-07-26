#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
	private:
		string name, lop, ns;
		double gpa;
	public:
		SinhVien(){
			name = lop = ns = "";
			gpa = 0;
		}
		void nhap();
		void xuat();
};


void SinhVien::nhap(){
	getline(cin, name);
	cin >> lop >> ns >> gpa;
	if(ns[2] != '/') ns = "0" + ns;
	if(ns[5] != '/') ns.insert(3, "0");
}
void SinhVien::xuat(){
	cout << "B20DCCN001" << " " << name << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}