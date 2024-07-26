#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int k; cin >> k;
		multiset<char> se;
//aabcdabbaddeeh	
		ll res = 0;
		int l = 0, r = 0;
		int cnt = 0;
		for(int i = 0; i < s.size(); i++){
			se.insert(s[i]);
			while(se.size() > 2){
				auto it = se.find(s[l]);
				se.erase(it);
				++l;
			}
			res += i - l + 1;
		}
		cout << res << endl;
	}
}