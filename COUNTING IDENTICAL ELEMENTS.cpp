#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		int cnt = 0;
		map <int, int> mp;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(mp[a[i][j]] == i){
					++mp[a[i][j]];
					
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(mp[a[i][j]] == n){
					++cnt;
					mp[a[i][j]] = 0;
				}
			}
		}
		cout << cnt << endl;
	}
}