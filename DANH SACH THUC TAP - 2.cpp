#include <bits/stdc++.h>
using namespace std;
using ll = long long;


class SinhVien{
	private:
		string ma, ten, lop, email, dn;
		int stt;
	public:
		SinhVien(){
			ma = ten = lop =  email = dn = "";
			stt = 0;
		}
		void in();
		void nhap();
		string getDn(){
			return this->dn = dn;
		}
		string getMa(){
			return this->ma = ma;
		}
		
};

bool cmp(SinhVien a, SinhVien b){
	if(a.getMa() < b.getMa()) return true;
	return false;
}

int cnt = 0;

void SinhVien::nhap(){
	++cnt;
	stt = cnt;
	cin >> ma;
	cin.ignore();
	getline(cin, ten);
	cin >> lop >> email >> dn;
}

void SinhVien::in(){
	cout << stt << " " << ma << " " << ten << " " << lop << " " << email << " " << dn << endl;
}

int main(){
	int n; cin >> n;
	SinhVien a[50];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	sort(a, a + n, cmp);
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		for(int i = 0; i < n; i++){
			if(a[i].getDn() == s) a[i].in();
		}
	}
}

//6
//B17DCCN016 
//Le Khac Tuan Anh 
//D17HTTT2   
//test1@stu.ptit.edu.vn
//VIETTEL
//B17DCCN107 
//Dao Thanh Dat    
//D17CNPM5   
//test2@stu.ptit.edu.vn
//FPT
//B17DCAT092 
//Cao Danh Huy     
//D17CQAT04-B
//test3@stu.ptit.edu.vn
//FPT
//B17DCCN388 
//Cao Sy Hai Long  
//D17CNPM2   
//test4@stu.ptit.edu.vn
//VNPT
//B17DCCN461 
//Dinh Quang Nghia 
//D17CNPM2   
//test5@stu.ptit.edu.vn
//FPT
//B17DCCN554 
//Bui Xuan Thai    
//D17CNPM1   
//test6@stu.ptit.edu.vn
//GAMELOFT
//1
//FPT