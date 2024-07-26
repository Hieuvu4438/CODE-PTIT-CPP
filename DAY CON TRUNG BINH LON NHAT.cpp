#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		ll res = 0, sum = 0, idx = 0;
		for(int i = 0; i < k; i++) sum += a[i];
		if(sum > res){
			sum = res;
			idx = k - 1;
		}
		for(int i = k; i < n; i++){
			sum += a[i];
			sum -= a[i-k];
			if(sum > res){
				res = sum;
				idx = i;
			}
//			cout << sum << endl;
			
			
		}
//		cout << a[idx-1] << " " << a[idx] << endl;
		for(int i = idx - k + 1; i <= idx; i++) cout << a[i] << " ";
		cout << endl;
		
	}
}