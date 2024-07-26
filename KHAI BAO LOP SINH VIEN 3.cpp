#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
	private:
		string ten, lop, ns;
		double gpa;
	public:
		SinhVien(){
			ten = lop = ns = "";
			gpa = 0;
		}
// 01/2/2002
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		
};
string chuanHoa2(string s){
	string tmp = "";
	string word;
	stringstream ss(s);
	while(ss >> word){
		tmp += toupper(word[0]);
		for(int i = 1; i < word.size(); i++) tmp += tolower(word[i]);
		tmp += " ";
	}
	tmp.erase(tmp.size() - 1);
	return tmp;
}
istream& operator >> (istream& in, SinhVien& a){
	getline(in, a.ten);
	cin >> a.lop >> a.ns >> a.gpa;
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/'){
		a.ns = a.ns.insert(3, "0");
	}
	return in;
}
ostream& operator << (ostream& out, SinhVien a){
	out << "B20DCCN001 " << chuanHoa2(a.ten) << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}