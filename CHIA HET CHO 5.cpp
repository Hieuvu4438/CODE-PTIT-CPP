#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		reverse(s.begin(), s.end());
		ll sum = 0;
		for(int i = 0; i < s.size(); i++){
			ll res = (s[i] - '0') * pow(2, i);
			sum += res % 5;
		}
		if(sum % 5  == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}