#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m], b[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				b[i][j] = a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(a[i][j]){
					for(int k = 0; k < m; k++){
						b[i][k] = 1;
					}
					for(int l = 0; l < n; l++){
						b[l][j] = 1;
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}