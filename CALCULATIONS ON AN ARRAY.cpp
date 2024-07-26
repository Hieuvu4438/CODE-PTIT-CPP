#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n];
		ll ucln = a[0];
		ll res = 1;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			ucln = gcd(ucln, a[i]);
			res *= a[i];
		}
		cout << pow(res, ucln) << endl;
	}
}