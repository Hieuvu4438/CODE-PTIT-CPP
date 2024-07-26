#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dem[1000001];
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		map <int, int> mp;
		set <int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
			
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			if(mp[b[i]] != 0){
				for(int j = 0; j < mp[b[i]]; j++){
					cout << b[i] << " ";
				}
			}
			mp[b[i]] = 0;
		}
		for(int i = 0; i < n; i++){
			if(mp[a[i]] != 0) se.insert(a[i]);
		}
		for(auto it : se) cout << it << " ";
	}
}