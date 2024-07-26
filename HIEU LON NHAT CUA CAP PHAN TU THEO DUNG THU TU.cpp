#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int max(int a, int b){
	if(a < b) return b;
	return a;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int res = -1;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[j] > a[i]){
					res = max(res, a[j] - a[i]);
				}
			}
		}
		cout << res << endl;
	}
}