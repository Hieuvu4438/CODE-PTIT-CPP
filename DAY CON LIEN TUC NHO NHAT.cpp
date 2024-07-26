#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		ll sum = 0;
		ll ans = 0;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int l = 0;
		for(int i = 0; i < n; i++){
			sum += a[i];
			if(sum >= x){
				ans = min(1ll* i - l + 1, ans);
				sum -= a[l];
				++l;
			}
		}
		cout << ans << endl;
	}
}