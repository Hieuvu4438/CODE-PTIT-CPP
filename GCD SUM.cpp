#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

ll sum(ll n){
	ll sum = 0;
	while(n){
		sum += n % 10;
		n/=10;
	}
	return sum;
}

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		while(gcd(n, sum(n)) == 1){
			++n;
		}
		cout << n << endl;
	}
}
