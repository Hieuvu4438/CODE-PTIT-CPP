#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n+5];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int l = 1, r = 1;
		int res = 1e9;
		int sum = 0;
		for(int i = 1; i <= n; i++){
//			cout << i << " " << sum << endl;
			if(sum <= 2 * x){
				sum += a[i];
//				r++;
			}
			else{
				res = min(res, i - l);
				sum -= a[l];
				++l;
				--i;
			}
		}
		if(res == 1e9) cout << -1 << endl;
		else cout << res  << endl;
	}
}