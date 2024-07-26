#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// 2 3 5 5 20 80
int  main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int l = 0, r = n-1;
		sort(a, a + n);
		int check = -1;
		while(l < r){
			if(a[r] - a[l] == k){
				check = 1;
				break;
			}
			else if(a[r] - a[l] > k) ++l;
			else if(a[r] - a[l] < k) 
		}
		cout << check << endl;
	}
	
}