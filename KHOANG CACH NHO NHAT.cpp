#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll min(ll a, ll b){
	if(a < b) return a;
	return b;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n];
		ll res = 1e9;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				res = min(res, abs(a[j] - a[i]));
			}
		}
		cout << res << endl;
	}
}