#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class NhanVien{
	private:
		string ten, gt, ns, dc, mt, ng;
	public:
		NhanVien(){
			ten = gt = ns = dc = mt = ng = "";
		}
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
		
};

istream& operator >> (istream& in, NhanVien& a){
	getline(in, a.ten);
	cin >> a.gt >> a.ns;
	cin.ignore();
	getline(in, a.dc);
	cin >> a.mt >> a.ng;
	return in;
}

ostream& operator << (ostream& out, NhanVien a){
	out << "00001 " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mt << " " << a.ng;
	return out;
}
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}