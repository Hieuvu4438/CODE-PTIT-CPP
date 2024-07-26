#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void hieu(string a, string b){
	int n1 = a.size(), n2 = b.size(), n = 0;
	int x[n1], y[n1], z[n1];
	for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
	for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
	reverse(x, x + n1);
	reverse(y, y + n2);
	for(int i = n2; i < n1; i ++) y[i] = 0;
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = x[i] - y[i] - nho;
		if(tmp < 0){
			nho = 1;
			z[n++] = 10 + tmp;
		}
		else{
			z[n++] = tmp;
			nho = 0;
		}
	}
	int ok = 0;
	for(int i = n - 1; i >= 0; i--){
		if(ok == 0 && z[i]) ok = 1;
		if(ok) cout << z[i];
//		cout << z[i];
	}
	if(ok == 0) cout << "0";
	cout << endl;
}
void hieu2(string a, string b){
	int n1 = a.size(), n2 = b.size(), n = 0;
	int x[n1], y[n1], z[n1];
	for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
	for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
	reverse(x, x + n1);
	reverse(y, y + n2);
	for(int i = n2; i < n1; i ++) y[i] = 0;
	int nho = 0;
	for(int i = 0; i < n1; i++){
		int tmp = x[i] - y[i] - nho;
		if(tmp < 0){
			nho = 1;
			z[n++] = 10 + tmp;
		}
		else{
			z[n++] = tmp;
			nho = 0;
		}
	}
	int ok = 0;
	for(int i = n - 1; i >= 0; i--){
//		if(ok == 0 && z[i]) ok = 1;
//		if(ok) cout << z[i];
		cout << z[i];
	}
//	if(ok == 0) cout << "0";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		if(a.size() < b.size() || (a.size() == b.size() && a < b)) hieu2(b, a);
		else hieu(a,b);
	}
}