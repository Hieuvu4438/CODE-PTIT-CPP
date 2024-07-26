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
			return this-> lop = lop;
		}
		friend string tach(SinhVien &);
};

string t = "";
istream& operator >> (istream& cin, SinhVien& a){
	cin >> a.ma;	
// 	in.ignore();
    cin.ignore();
    // scanf("\n");
	getline(cin, a.ten);
	cin >> a.lop >> a.email;
	a.ma1 = a.lop;
	a.lop = a.lop.substr(1,2);
	return cin;
}

ostream& operator << (ostream& cout, SinhVien a){
	cout << a.ma << " " << a.ten << " " << a.ma1 << " " << a.email << endl;
	return cout;
}

int main(){
	int n; cin >> n;
	SinhVien a[1005];
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