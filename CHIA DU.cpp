#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int a, m; cin >> a >> m;
		int x, check = 1;
		for(int i = 0; i < m; i++){
			x = i;
			if(a * x % m == 1){
				check = 0;
				cout << x << endl;
				break;
			}
		}
		if(check) cout << "-1\n";
	}
}