#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll a[n];
		multiset<int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		vector<int> v;
		for(auto it : se){
			v.push_back(it);
		}
		cout << v[v.size() - 1] << endl;
		
	}
}