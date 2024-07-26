#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n, cnt = 0;
	cin >> n;
	map <string, int> mp;
	set<string> se;
	cin.ignore();
	for(int i = 0; i < n; i++){
		string s;
		getline(cin, s);
		se.insert(s);
	}
	cout << se.size();
}