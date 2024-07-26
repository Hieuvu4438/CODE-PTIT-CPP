#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s, t;
		getline(cin, s);
		getline(cin, t);
		stringstream ss(t);
		string word;
		map<string, int> mp;
		set<string> se;
		while(ss >> word){
			mp[word]++;
		}
		stringstream ss1(s);
		string word1;
		while(ss1 >> word1){
			if(mp[word1] == 0) se.insert(word1);
		}
		for(auto it : se) cout << it << " ";
		cout << endl;
	}
}