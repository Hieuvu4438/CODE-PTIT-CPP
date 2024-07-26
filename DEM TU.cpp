#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		cin.ignore();
		string s; getline(cin, s);
		stringstream ss(s);
		string word;
		int cnt = 0;
		while(ss >> word){
			++cnt;
		}
		cout << cnt << endl;
	}
}