#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	string s; cin >> s;
	map<char, int> mp, mp2;
	mp[s[-1]] = 0;
	mp2[s[-1]] = 0;
	int res1 = -1e9, res = -1e9;
	int tongB = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'B'){
			mp[s[i]]++;
			tongB++;
			res1 = max(res1, mp2[s[i-1]]);
			mp2[s[i-1]] = 0;
		}
		else{
			mp2[s[i]]++;
			res = max(res, mp[s[i-1]]);
			mp[s[i-1]] = 0;
		}
	}
	int tongA = s.size() - tongB;
//	cout << res << " " << tongB << endl;
//	cout << res1 << " " << tongA << endl;
	int c1 = tongB - res + 1, c2 = tongA - res1 + 2;
	if(tongB == 0){
		cout << 0;
		return 0;
	}
	if(tongA == 0){
		cout << 1;
		return 0;
	}
	cout << min(c1, c2);
}