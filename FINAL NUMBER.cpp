#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll res = 1;
		ll sum = 0;
		while(res){
			sum += n % 10;
			n /= 10;
			if(n == 0){
				if(sum < 10) res = 0;
				else{
					res = 1;
					n = sum;
					sum = 0;
				}
			}
		}
		cout << sum << endl;
	}
}