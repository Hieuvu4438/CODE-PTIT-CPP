#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m], F[n][m] = {0};
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				
			}
		}
		for(int i = 0; i < m; i++){
			int cnt = 0;
			for(int j = 0; j < n; j++){
				if(a[j][i] == 1){
					++cnt;
					F[j][i] = cnt;
				}
				
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				for(int k = 0; k < j; k++){
					if(F[i][j] > F[i][k]) swap(F[i][j], F[i][k]);
				}
			}
		}
		int cur, max = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cur = (j + 1) * F[i][j];
				if(cur > max){
					max = cur;
				}
			}
		}
		cout << max << endl;
	}
	

}