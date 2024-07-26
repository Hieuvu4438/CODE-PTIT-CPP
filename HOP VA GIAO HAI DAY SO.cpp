#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n], b[m];
		map<int, int> mp;
		set <int> se1, se2;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]]++;
			se2.insert(a[i]);
		}
		for(int i = 0; i < m; i++){
			cin >> b[i];
			se2.insert(b[i]);
			if(mp[b[i]] != 0) se1.insert(b[i]);
		}
		for(auto it : se2) cout << it << " ";
		cout << endl;
		for(auto it : se1) cout << it << " ";
		cout << endl;
	}
}