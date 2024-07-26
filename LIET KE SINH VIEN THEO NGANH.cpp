#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
	private:
		string msv, msv1, ten, lop, email;
	public:
		SinhVien(){
			msv = ten = lop = email = "0";
		}
		void nhap();
		void in();
		string getMa(){
			return this->msv = msv;
		}
		string getLop(){
			return this->lop = lop;
		}
};

void SinhVien::nhap(){
	cin >> msv;
	msv1 = msv;
	msv = msv.substr(3,4);
	cin.ignore();
	getline(cin, ten);
	cin >> lop >> email;
}

void SinhVien::in(){
	cout << msv1 << " " << ten << " " << lop << " " << email << endl;;
}
string tach(string s){
	string tmp = "";
	stringstream ss(s);
	string word;
	int cnt = 0;
	while(ss >> word){
		tmp+= word[0];
		++cnt;
		if(cnt == 2) break;
	}
	return tmp;
}

void inHoa(string s){
	
}
int main(){
	int n; cin >> n;
	SinhVien a[50];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	int q; cin >> q;
	while(q--){
		cin.ignore();
		string s;
		getline(cin, s);
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
		string s1 = tach(s);
		s1 = "DC" + s1;
		for(SinhVien x : a){
			if(x.getMa() == s1){
				if(s1 == "DCKT" || s1 == "DCVT" || s1 == "DCDT") x.in();
				else if(s1 == "DCCN" || s1 == "DCAT"){
					if(x.getLop().substr(0,1) != "E") x.in();
				}
			}
		}
	}
}