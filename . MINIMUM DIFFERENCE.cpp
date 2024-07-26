#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int min1 = 1e9;
		for(int i = 0; i < n - 1; i++){
			min1 = min(a[i+1] - a[i], min1);
		}
		cout << min1 << endl;
	}
}