#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int check(int a[], int n, int x){
	int l = 0;
	for(int r = 0; r < n; r++){
		while(a[r] - a[l] > x){
			++l;
		}
		if(a[r] - a[l] == x) return 1;
	}
	return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x; cin >> x;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		if(check(a, n, x)) cout << "1\n";
		else cout <<"-1\n";
	}
}