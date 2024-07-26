#include <bits/stdc++.h>
using namespace std;
using ll = long long;


struct SinhVien{
	string name, masv, ns;
	double gpa;	
};
void nhapThongTinSV(SinhVien &a){
	getline(cin, a.name);
	cin >> a.masv >> a.ns;
	cin >> a.gpa;
	
}
string chuanHoa(SinhVien a){
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/'){
		a.ns.insert(3, "0");
	} 
	return a.ns;
}
void inThongTinSV(SinhVien a){
	cout << "N20DCCN001" << " " << a.name << " " << a.masv << " " << chuanHoa(a) << " " << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}