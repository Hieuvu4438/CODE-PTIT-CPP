#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int check = 0;
		for(int i = s.size() - 1; i >= 1; i--){
			if(s[i] < s[i - 1]){
				check = 1;
				int res = 0, pos = i;
				for(int j = i; j < s.size(); j++){
					int lon = s[j] - '0';
//					cout << lon << " " << res << " " << pos << endl;
					if(res < lon && s[j] < s[i - 1]){
						res = lon;
						pos = j;
					}
				}
				swap(s[i - 1], s[pos]);
				break;
			}
		}
		if(check == 0) cout << -1 << endl;
		else cout << s << endl;
	}
}