#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct NhanVien{
	string name;
	string gender;
	string ns;
	string dc;
	ll ma;
	string date;
};

void nhap(NhanVien &a){
	getline(cin, a.name);
	cin >> a.gender;
	cin >> a.ns;
	cin.ignore();
	getline(cin, a.dc);
	cin >> a.ma;
	cin >> a.date;
}

void in(NhanVien a){
	cout << "00001" << " " << a.name << " " << a.gender << " " << a.ns << " " << a.dc << " " << a.ma << " " << a.date;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}