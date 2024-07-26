#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int checknt(ll n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll l, r;
		cin >> l >> r;
		int cnt = 0;
		if(l < r){
			for(int i = sqrt(l); i <= sqrt(r); i++){
				if(checknt(i)) ++cnt;
			}
			cout << cnt << endl;
		}
	}
}