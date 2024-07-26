#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		ll sum1 = 0;
		ll sum2 = 0;
		for(int i = 0; i < s.size(); i++){
			if(i % 2 == 0){
				sum1 += s[i] - '0';
			}
			else sum2 += s[i] - '0';
		}
		sum1 %= 11;
		sum2 %= 11;
		if((sum1 - sum2) % 11 == 0) cout << "1\n";
		else cout << "0\n"; 
	}
}