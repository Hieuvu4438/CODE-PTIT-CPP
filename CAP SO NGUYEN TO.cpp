#include <bits/stdc++.h>
using namespace std;
using ll =long long;

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i  == 0) return 0;
	}
	return n > 1;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 2; i <= n / 2; i++){
			if(check(i)){
				if(check(n - i)){
					cout << i << " " << n - i << endl;
					break;
				}
			}
		}

	}
}