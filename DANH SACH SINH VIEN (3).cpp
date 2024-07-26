#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct SinhVien{
	string name, lop, ns;
	double gpa;
	string masv = "B20DCCN";
};

bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}

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
string chuanHoaname(SinhVien a){
	stringstream ss(a.name);
	string res = ""; string word;
	while(ss >> word){
		res += toupper(word[0]);
		for(int j = 1; j < word.size(); j++){
			res += tolower(word[j]);
		}
		res += " ";
	}
	return res;
}

string chuanHoa(SinhVien a){
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/'){
		a.ns.insert(3, "0");
	}
	return a.ns;
}

void sapxep(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		string s = to_string(i+1);
		while(s.size() < 3){
			s = "0" + s;
		}
		a[i].masv += s;
	}
	sort(a, a + n, cmp);
}
void in(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].masv << " " << chuanHoaname(a[i]) << " " << a[i].lop << " " << chuanHoa(a[i]) << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}