#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		multiset <int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		vector<int> v;
		for(auto it : se){
			v.push_back(it);
		}
		for(int i = v.size() - 1; i >= v.size() - k; i--){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}