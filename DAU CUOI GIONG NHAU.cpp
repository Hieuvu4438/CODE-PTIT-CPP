#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		map<char, int> mp;
		for(char x : s){
			mp[x]++;
		}
		ll ans = s.length();
		for(auto it: mp){
			ans += it.second * (it.second - 1) / 2;
		}
		cout << ans << endl;
	}
}