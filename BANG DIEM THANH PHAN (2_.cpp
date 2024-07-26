#include <bits/stdc++.h>
using namespace std;
using ll = long long;



class SinhVien{
	private:
		string ma, ten, lop;
		double d1, d2, d3;
	public:
		SinhVien(){
			ma = ten = lop = "";
			d1 = d2 = d3 = 0;
		}
		void nhap();
		void in();
		string getTen(){
			return this->ten = ten;
		}
};

void SinhVien::nhap(){
	cin >> ma;
	cin.ignore();
	getline(cin, ten);
	cin >> lop >> d1 >> d2 >> d3;
	
}
int cnt = 0;

void SinhVien::in(){
	cout << cnt << " "<< ma << " " << ten << " " << lop << " " << fixed << setprecision(1) << d1 << " " << d2 << " " << d3 << endl;
}

bool cmp(SinhVien a, SinhVien b){
	if(a.getTen() < b.getTen()) return true;
	return false;
}

int main(){
	int n; cin >> n;
	SinhVien a[50];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		++cnt;
		a[i].in();
	}
}