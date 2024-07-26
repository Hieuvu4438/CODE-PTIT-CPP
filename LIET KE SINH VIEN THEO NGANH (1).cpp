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
			return this->lop;
		}
		string getMa(){
			return this->ma;
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

string chuanHoa(string s){
	string tmp = "";
	stringstream ss(s);
	string word;
	while(ss >> word){
		tmp += toupper(word[0]);
		break;
	}
	return tmp;
}

string chuanHoa2(string s){
	stringstream ss(s);
	string tmp = "";
	string word;
	while(ss >> word){
		for(int i = 0; i < word.size(); i++) word[i] = toupper(word[i]);
		tmp += word;
		tmp += " ";
	}
	tmp.erase(tmp.size() - 1);
	return tmp;
}


int main(){
	int n; cin >>n;
	SinhVien a[1005];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	int q; cin >> q;
	while(q--){
		cin.ignore();
		string s; getline(cin, s);
		s = chuanHoa2(s);
		cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
		s = chuanHoa(s);
		for(SinhVien x : a){
			string tmp = x.getMa();
			string s1 = tmp.substr(5, 1);
			if(s1 == s) x.in();
		}
	}
}