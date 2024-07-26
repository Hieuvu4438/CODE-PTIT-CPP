#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int k, n; cin >> k >> n;
		int a[k][n];
		multiset <int> se;
		for(int i = 0; i < k; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				se.insert(a[i][j]);
			}
		}
		for(auto it : se) cout << it << " ";
		cout << endl;
	}
}