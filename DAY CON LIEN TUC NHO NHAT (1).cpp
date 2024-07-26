#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int pre[n + 5];
		pre[0] = a[0];
		for(int i = 1; i < n; i++){
			pre[i] = pre[i-1] + a[i];
		}
	}
}