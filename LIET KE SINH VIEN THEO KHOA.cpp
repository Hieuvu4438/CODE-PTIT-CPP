#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
	private:
		string ma, ma1, ten, lop, email;
	public:
		SinhVien(){
			ma = ma1 = ten = lop = email = "";
		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		friend string tach(SinhVien&);
		string getMa(){
			return this-> ma = ma;
		}
		friend string tach(SinhVien &);
};

string t = "";
istream& operator >> (istream& in, SinhVien& a){
	in >> a.ma;
	a.ma1 = a.ma;
	a.ma = a.ma.substr(1,2);
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}

ostream& operator << (ostream& out, SinhVien a){
	out << a.ma1 << " " << a.ten << " " << a.lop << " " << a.email << endl;
	return out;
}

int main(){
	int n; cin >> n;
	SinhVien a[50];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int q; cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN KHOA " << s << ":\n";
		s = s.substr(2);
		for(SinhVien x : a){
			if(x.getMa() == s){
				cout << x;
			}
		}
	}
}