#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class GiaoVien{
	private:
		string ma, ten, mon;
	public:
		GiaoVien(){
			ma = ten = mon = "";
		}
		friend istream& operator >>(istream&, GiaoVien&);
		friend ostream& operator << (ostream&, GiaoVien);
		friend string chuanHoa(GiaoVien );
		string getMa(){
			return this->mon = mon;
		}
};
string chuanHoa(GiaoVien a){
	string s = a.mon;
	string tmp = "";
	string word;
	stringstream ss(s);
	while(ss >> word){
		tmp += toupper(word[0]);
	}
	return tmp;
}
string chuanHoa1(string s){
//	string s = a.mon;
	string tmp = "";
	string word;
	stringstream ss(s);
	while(ss >> word){
		tmp += toupper(word[0]);
	}
	return tmp;
}
int cnt = 1;
istream& operator >> (istream& in, GiaoVien &a){
	a.ma = "GV";
	string s = to_string(cnt);
	++cnt;
	while(s.size() < 2) s = "0" + s;
	a.ma = a.ma + s;
	in.ignore();
	getline(in, a.ten);
	getline(in, a.mon);
	string t = chuanHoa1(a.mon);
	a.mon = t;
	return in;
}
ostream& operator << (ostream& out, GiaoVien a){
	out << a.ma << " " << a.ten << " " << a.mon << endl;
	return out;
}

int main(){
	int n; cin >> n;
	GiaoVien a[50];
	for(int i = 0; i < n; i++) cin >> a[i];
	int q; cin >> q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin, s);
		cout << "DANH SACH BO MON " << chuanHoa1(s) << ":\n";
		for(GiaoVien x : a){
			if(x.getMa() == chuanHoa1(s)) cout << x;
		}
		
	}
}