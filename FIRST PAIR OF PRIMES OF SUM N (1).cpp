#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int check(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}


int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int m = 0;
		int a[m];
		for(int i = 2; i < n; i++){
			if(check(i)){
				a[m++] = i;		
			}
		}
		for(int i = 0; i < m; i++) cout << a[i] << endl;
		int sum = 0;
		for(int i = 0; i < m - 1; i++){
			for(int j = i; j < m; j++){
				sum += a[i] + a[j];
				cout << sum << endl;
				if(sum == n){
					cout << a[i] << " " << a[j] << endl;
					break;
				}
				else if(sum > n){
					sum = 0;
					break;
				}
				else{
					sum = 0;
				}
			}
		}
		if(sum == 0) cout << "-1" << endl;
	}
}