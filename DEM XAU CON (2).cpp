#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int k; cin >> k;
		int r = 0, l = 0;
		vector<char> v;
		set<char> se;
		multimap<char, int> mp;
		int cnt = 0;
		for(int i = 0; i < s.size(); ++i){
			v.push_back(s[i]);
			mp[s[i]]++;
			se.insert(s[i]);
			while(se.size() > k){
				auto it = se.find(s[0]);
				se.erase(it);
				
			}
			if(se.size() == k){
				cnt += i - l;
				l += mp.count(s[l]);
				
			}
		}
		cout << cnt << endl;
	}
}