#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n, m; cin >> n;
	int a[n][n], b[m][m];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	cin >> m;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= m; j++) cin >> b[i][j];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			int c = i % m, d = j % m;
			if(c == 0) c = m;
			if(d == 0) d = m;
			a[i][j] = a[i][j] * b[c][d];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}