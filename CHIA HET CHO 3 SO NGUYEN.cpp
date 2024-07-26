#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a % b);
}

ll lcm(ll a, ll b){
	return a * b / gcd(a,b);
}
int main(){
	int t; cin >> t;
	while(t--){
		ll x, y, z, n;
		cin >> x >> y >> z >> n;
		ll g = lcm(lcm(x,y), z);
		ll a = pow(10, n - 1);
		ll b = pow(10, n);
		ll res = (a + g - 1) / g * g;
		if(res < b) cout << res << endl;
		else cout << "-1\n";
	}
}