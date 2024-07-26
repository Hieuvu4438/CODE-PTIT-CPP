#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		multiset <int> se;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			se.insert(a[i]);
		}
		vector <int> v;
		for(auto it : se){
			v.push_back(it);
		}
		int cnt = 0;
		for(int i = 0; i < v.size() - 1; i++){
			if(v[i+1] - v[i] > 1){
				cnt += v[i+1] - v[i] - 1;
			}
		}
		cout << cnt << endl;
	}
}