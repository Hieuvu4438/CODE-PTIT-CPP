#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int pre[n];
		for(int i = 1; i <= n; i++){
			if(i == 1)
				pre[i] = a[i];
			else
				pre[i] = pre[i - 1] + a[i];
		}
		int l = 0, r = n- 1;
//		for(int i = 1; i <= n; i++) cout << pre[i] << " ";
//		cout << endl;
		int check = -1;
		for(int i = 1; i <= n - 1; i++){
//			cout << pre[n-1] - pre[i + 1] << " " << pre[i] << endl;
			if(pre[i] == pre[n] - pre[i+1]){
				check = 0;
				cout << i + 1 << endl;
				break;
			}
		}
		if(check == -1) cout << check << endl;
	}
}