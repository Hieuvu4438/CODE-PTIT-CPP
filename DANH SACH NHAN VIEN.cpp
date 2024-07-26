#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct NhanVien{
	string name;
	string gender;
	string ns;
	string dc;
	string ma;
	string date;
};

void nhap(NhanVien &p){
	cin.ignore();
	getline(cin, p.name);
	cin >> p.gender >> p.ns;
	cin.ignore();
	getline(cin, p.dc);
	cin >> p.ma >>  p.date;

}
void in(NhanVien a){
	cout << a.name << " " << a.gender << " " << a.ns << " " << a.dc <<  " " << a.ma << " " << a.date;
}
void inds(NhanVien a[], int n){
	for(int i = 0; i < n; i++){
		string s = to_string(i + 1);
		while(s.size() < 5) s = "0" + s;
		cout << s << " ";
		in(a[i]);
		cout << endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}