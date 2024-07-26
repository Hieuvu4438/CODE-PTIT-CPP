#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k, a[100][100], x[100][100];
vector<int> v;
int cnt = 0;
void Try(int i, int j ,int sum){
	if(i == n && j == n && sum == k){
		++cnt;
	}
	if(i >= 1 && i <= n){
		Try(i+1, j, sum + a[i + 1][j]);
	}
	if(j >= 1 && j <= n){
		Try(i, j + 1, sum + a[i][j+1]);
	}
	
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		cnt = 0;	
//		sum = a[1][1];
		Try(1, 1, a[1][1]);
		cout << cnt << endl;
		
	}
}