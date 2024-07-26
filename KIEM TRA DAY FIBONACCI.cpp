#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int n){
	if(n == 0 || n == 1) return true;
	int f1 = 1, f2 = 0;
	int fn = f1 + f2;
	for(int i = 2; i <= 92; i++){
		fn = f1 + f2;
		if(n == fn) return true;
		f2 = f1;
		f1 = fn;
	}
	return false;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n;cin >> n;
		int a[n];
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++){
			if(check(a[i])) cout << a[i] << " ";
		}
		cout << endl;
	}
}