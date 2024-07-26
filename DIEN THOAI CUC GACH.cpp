#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(int a[], int n){
	int l = 0, r = n - 1;
	while(l <= r){
		if(a[l] != a[r]) return false;
		++l;
		--r;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int m = 0;
		int a[s.size()];
//		string tmp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		for(int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
		for(char x : s){
			int n = (int)x - 65;
//			cout << n << endl;
			if(n >= 0 && n <= 2) a[m++] = 2;
			else if(n >= 3 && n <= 5) a[m++] = 3;
			else if(n >= 6 && n <= 8) a[m++] = 4;
			else if(n >= 9 && n <= 11) a[m++] = 5;
			else if(n >= 12 && n <= 14) a[m++] = 6;
			else if(n >= 15 && n <= 18) a[m++] = 7;
			else if(n >= 19 && n <= 21) a[m++] = 8;
			else a[m++] = 9;
		}
		if(check(a, m) == true) cout << "YES\n";
		else cout <<"NO\n";
	}
}