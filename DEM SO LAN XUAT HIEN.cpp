#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		map<int, int> mp;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] == k) ++mp[k];
		}
		if(mp[k] == 0) cout << "-1\n";
		else cout << mp[k] << endl;
	}
}