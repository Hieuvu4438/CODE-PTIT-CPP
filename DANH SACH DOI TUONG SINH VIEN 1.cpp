#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class SinhVien{
	private:
		string name, lop, ns;
		double gpa;
		string ma;
	public:
		SinhVien(){
			ma = "B20DCCN";
			name = lop = ns = "";
			gpa = 0;
		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		friend void maSV(SinhVien [], int n);
		
};
int cnt = 0;
istream& operator >> (istream& in, SinhVien &a){
	++cnt;
	string s = to_string(cnt);
	while(s.size() < 3) s = "0" + s;
	a.ma = a.ma + s;   
	cin.ignore();
	getline(in, a.name);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[2] != '/') a.ns = "0" + a.ns;
	if(a.ns[5] != '/') a.ns.insert(3, "0");
	return in;
}

ostream& operator << (ostream& out, SinhVien a){
	out << a.ma << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl; 
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}