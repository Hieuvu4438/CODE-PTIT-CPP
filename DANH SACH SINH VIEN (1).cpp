#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SinhVien{
	string name, lop, ns;
	double gpa;
};

void input(SinhVien &a){
	cin.ignore();
	getline(cin, a.name);
	cin >> a.lop >> a.ns >> a.gpa;
}
void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		input(a[i]);
	}
}

string chuanHoa(SinhVien a){
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/'){
		a.ns.insert(3, "0");
	}
	return a.ns;
}
void in(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		string s = to_string(i + 1);
		while(s.size() < 3){
			s = "0" + s;
		}
		s = "B20DCCN" + s;
		cout << s << " " << a[i].name << " " << a[i].lop << " " << chuanHoa(a[i]) << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}