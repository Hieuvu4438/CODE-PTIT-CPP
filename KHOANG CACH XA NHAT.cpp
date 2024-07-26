#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		map<int, int> mp;
		int res = -1e9;
		int idx = 0;
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[j] >= a[i]){
					if(j - i > res){
						res = j - i;
					}
				}
			}
		}
		cout << res << endl;
	}
}