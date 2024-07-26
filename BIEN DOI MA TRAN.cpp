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
		int a[n][n];
		vector<int> v;
		multiset<int> se;
		int res = 0;
		int init = 0;
		for(int i = 0; i < n; i++){
			int sum = 0;
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
				sum += a[i][j];
			}
			if(sum > res){
				init = i;
				res = sum;
			}
			
		}
		for(int i = 0; i < n; i++){
			se.insert(a[init][i]);
				
			}
		for(auto it : se) v.push_back(it);
		int cnt = 0;
		for(int i = 0; i < n; i++){
			vector<int> v1;
			multiset<int> se1;
			if(i != init){
				for(int j = 0; j < n; j++){
					se1.insert(a[i][j]);
				}
				for(auto it : se1) v1.push_back(it);
				for(int i = 0; i < v1.size(); i++){
					cnt += v[i] - v1[i];
				}
			}
		}
		cout << cnt << endl;
	}
}