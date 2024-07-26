#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		ll dem = 0;
		while(1){
			for(int i = 0; i < n; i++){
				if(a[i] % 2 == 1){
					--a[i];
					++dem;
				}
			}
			for(int i = 0; i < n; i++){
				a[i] /= 2;
			}
			++dem;
			int check = 1;
			for(int i = 0; i < n; i++){
				if(a[i] != 0) check = 0;
			}
			if(check) break;
		}
		cout << dem - 1<< endl;
	}
}