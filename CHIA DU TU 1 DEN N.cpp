#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll k; cin >> k;
		ll sum = 0;
		for(int i = 1; i <= n; i++){
			sum += i % k;
		}
		cout << sum << endl;
	}
}