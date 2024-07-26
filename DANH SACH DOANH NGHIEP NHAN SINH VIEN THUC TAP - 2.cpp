#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
	private:
		string ma, ten;
		int sl;
	public:
		SinhVien(){
			ma = ten = "";
			sl = 0;
		}
		friend istream& operator >>(istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		friend bool operator < (SinhVien a, SinhVien b){
			return a.sl > b.sl;
		}
		friend void sapxep(SinhVien a[], int n);
		int getSl(){
			return this->sl = sl;
		}
};

void sapxep(SinhVien a[], int n){
	sort(a, a + n);
}
istream& operator >> (istream& in, SinhVien &a){
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.sl;
	return in;
}
ostream& operator << (ostream& out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.sl << endl;
}

int main(){
	int n; cin >> n;
	SinhVien a[50];
	for(int i = 0; i < n; i++) cin >> a[i];
	sapxep(a, n);
	int q; cin >> q;
	while(q--){
		int a1, b; cin >> a1 >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a1 << " DEN " << b << " SINH VIEN:\n";
		for(SinhVien x : a){
			if(x.getSl() <= b && x.getSl() >= a1) cout << x;
		} 
	}
//	for(int i = 0; i < n; i++) cout << a[i];
}