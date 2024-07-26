#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class NhanVien{
	private:
		string ma, name, gt, ns, dc, mt, ng;
	
	public:
		static int cnt;
		
		NhanVien(){
			ma = "";
			name = gt = ns = dc = mt = ng = "";
		}
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
		
};
//int cnt = 0;
istream& operator >> (istream& in, NhanVien& a){
	++a.cnt;
	string s = to_string(a.cnt);
	while(s.size() < 5) s = "0" + s;
	a.ma = s;
	in.ignore();
	getline(in, a.name);
	in >> a.gt >> a.ns;
	in.ignore();
	getline(in, a.dc);
	in >> a.mt >> a.ng;
	return in;	
}
ostream& operator << (ostream& out, NhanVien a){
	out << a.ma << " " << a.name << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mt << " " << a.ng << endl;
}
int NhanVien::cnt = 0;
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}