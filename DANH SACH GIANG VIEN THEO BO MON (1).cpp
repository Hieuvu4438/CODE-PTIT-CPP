#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class GiangVien{
	private:
		string ten, mon;
		string ma;
	public:
		GiangVien(){
			ten = mon = "";
			ma = "GV";
		}
		void nhap();
		void in();
		string getMon(){
			return this->mon = mon;
		}
		string getMa(){
			return this->ma = ma;
		}
		string getTen(){
			return this->ten = ten;
		}
		friend void sort(GiangVien a, GiangVien b);
};
string tach(string s){
	string tmp = "";
	string word;
	stringstream ss(s);
	while(ss >> word){
		tmp = word;
	}
	return tmp;
}
bool cmp(GiangVien a, GiangVien b){
	if(tach(a.getTen()) != tach(b.getTen())) return tach(a.getTen()) < tach(b.getTen());
	return a.getMa() < b.getMa();
}
int cnt = 0;
void GiangVien::nhap(){
	++cnt;
	string s = to_string(cnt);
	while(s.size() < 2) s = "0" + s;
	ma = ma + s;
//	cin.ignore();
	getline(cin, ten);
	getline(cin, mon);
	
}
string monhoc(string s){
	string tmp = "";
	stringstream ss(s);
	string word;
	while(ss >> word){
		tmp += toupper(word[0]);
	}
	return tmp;
}
void GiangVien::in(){
	string t = monhoc(getMon());
	cout << ma << " " << ten << " " << t << endl;
}

string tach1(string s){
	string tmp = "";
	stringstream ss(s);
	string word;
	while(ss >> word){
		tmp += toupper(word[0]);
	}
	return tmp;
}
int main(){
	int n; cin >> n;
	cin.ignore();
	GiangVien a[50];
	for(int i = 0; i < n; i++){
		a[i].nhap();
//		cout << a[i].getTen()[2] << endl;
	}
	
	int q; cin >> q;
	cin.ignore();
	while(q--){
		string s; getline(cin, s);
		s = tach1(s);
		cout << "DANH SACH GIANG VIEN BO MON " << s << ":\n";
		for(GiangVien x : a){
			if(monhoc(x.getMon()) == s) x.in();
		}
	}
}