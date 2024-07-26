#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
	private: 
		string name, lop, ns;
		double gpa;
	public:
		SinhVien(){
			name = lop = ns = "";
			gpa  = 0;
		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
};

istream& operator >> (istream& in, SinhVien& a){
	getline(in, a.name);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[2] != '/') a.ns = "0" + a.ns;
	if(a.ns[5] != '/') a.ns.insert(3, "0");
	return in;
}

ostream& operator << (ostream& out, SinhVien a){
	out << "B20DCCN001 " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}