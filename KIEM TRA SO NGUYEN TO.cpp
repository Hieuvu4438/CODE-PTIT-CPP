#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int check(ll n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	ll n; cin >> n;
	if(check(n)) cout << "YES";
	else cout << "NO";
}