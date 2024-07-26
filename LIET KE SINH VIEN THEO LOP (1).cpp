#include <bits/stdc++.h>
using namespace std;
using ll = long long;


class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		SinhVien(){
			ma = ten = lop = email = "";
			
		}
		void nhap();
		void in();
		string getLop(){
			return this->lop = lop;
		}
		
};

void SinhVien::nhap(){
	cin >> ma;
	cin.ignore();
	getline(cin, ten);
	cin >> lop >> email;
}

void SinhVien::in(){
	cout << ma << " " << ten << " " << lop << " " << email << endl;
}


int main(){
	int n; cin >>n;
	SinhVien a[50];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
		for(SinhVien x : a){
			if(x.getLop() == s) x.in();
		}
	}
}