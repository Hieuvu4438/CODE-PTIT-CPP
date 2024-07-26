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
		ll n, m; 
		cin >> n >> m;
		ll sum = 0;
		for(int i = 1; i <= n; i++){
			sum += i;
		}
		ll res = (sum - m) / 2;
		ll res1 = sum - res;
		if(gcd(res, res1) == 1 && res1 - res == m) cout << "Yes\n";
		else cout << "No\n";
	}
	
}