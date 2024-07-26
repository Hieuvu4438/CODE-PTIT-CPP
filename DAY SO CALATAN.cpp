#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void init() {
    catalan[0] = catalan[1] = 1;
    for (int i=2; i<=n; i++) {
        catalan[i] = 0;
        for (int j=0; j < i; j++) {
            catalan[i] += (catalan[j] * catalan[i-j-1]) % (1e9 + 7);
            if (catalan[i] >= (1e9+7)) {
                catalan[i] -= (1e9+7);
            }
        }
    }
}

int main(){
	
}
/*
ll number(int n){
	ll res = 1;
	ll sum = 0;
	for(int i = 1; i <= n; i++){
		res = res * (4 * i - 2) / (i + 1);
	}
	return res;
}

ll tong(int n){
	ll sum  = 0;
	for(int i = 0; i <= n; i++){
		sum += number(i) * number(n - i);
	}
	return sum;
}
int main(){
	int n; cin >> n;
	cout << tong(n);
}