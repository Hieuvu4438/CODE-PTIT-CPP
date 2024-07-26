#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//void sinh(){
//	int i = n;
//	while(i >= 1 && a[i] > a[i + 1]){
//		--i;
//	}
//	if(i == 0)	cout << "-1\n";
//	else{
//		int j = n;
//		while(a[i] > a[j]) --j;
//		swap(a[i], a[j]);
//		reverse(a + i + 1, a + n + 1);
//		for(int i = 1; i <= n; i++) cout << a[i];
//		cout << endl;
//	}
//}
int main(){
	int t; cin >> t;
	while(t--){	
		int n; cin >> n;
		int k = 1;
		int a[100];
		while(n >= 10){
			int res = n % 10;
			a[k] = res;
			++k;
			n /= 10;
		}
		int l = 1, r = k;
		while(l <= r){
			swap(a[l], a[r]);
			++l;
			--r;
		}
		for(int i = 1; i <= k; i++) cout << a[i] << endl; 
//		int init = k - 1;
//		while(init >= 0 && a[init] > a[init + 1]){
//			--init;
//		}
//		if(init == -1) cout << "-1\n";
//		else{
//			int j = k - 1;
//			while(a[init] > a[j]) --j;
//			swap(a[init], a[j]);
//			reverse(a + init + 1, a + k + 1);
//			for(int i = 1; i <= k; i++) cout << a[i];
//			cout << endl;
//		}
	}
}