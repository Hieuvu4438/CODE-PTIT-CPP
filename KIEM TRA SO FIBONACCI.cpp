#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll fibo(ll n){
	if(n == 0 || n ==  1) return 1;
	ll f2 = 0, f1 = 1;
	ll fn = f1 + f2;
	for(int i = 2; i <= 92; i++){
		fn = f1 + f2;
		if(n == fn) return 1;
		f2 = f1;
		f1 = fn;
	}
	return 0;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		if(fibo(n)) cout << "YES\n";
		else cout << "NO\n";
	}
}