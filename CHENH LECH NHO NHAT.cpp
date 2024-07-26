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
		multiset<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		vector<int> v;
		for(auto it : se){
			v.push_back(it);
		}
		for(int i = 0; i < v.size() - 1; i++){
			res = min(res, v[i + 1] - v[i]);
		}
		cout << res << endl;
	}
}