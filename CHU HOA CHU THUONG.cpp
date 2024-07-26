#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		char c; cin >> c;
		if(isupper(c)) cout << (char)tolower(c) << endl;
		else cout << (char)toupper(c) << endl;
	}
}