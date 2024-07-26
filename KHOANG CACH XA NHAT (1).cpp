#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l = 0, r = n - 1;
		int res = 0;
		for(int i = 0; i < n; i++){
			while(i <= r){
				if(a[r] - a[i] > 0){
					res = max(res, r - i);
					break;
				}
				--r;
			}
			r = n - 1;
		}
		cout << res << endl;
	}
}