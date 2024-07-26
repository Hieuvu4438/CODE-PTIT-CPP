#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
	private:
		string msv, ten, lop, email;
	public:
		SinhVien(){
			msv = ten = lop = email = "";
		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		string getLop(){
			return this->lop = lop;
		}
};

istream& operator >> (istream& in, SinhVien& a){
	in >> a.msv;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}

ostream& operator << (ostream& out, SinhVien a){
	out << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
	return out;
}

int main(){
	SinhVien a[50];
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for(SinhVien x : a){
			if(x.getLop() == s) cout << x;
		}
	}
	
}