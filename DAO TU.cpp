#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		stringstream ss(s);
		string word;
		vector<string> v;
		while(ss >> word){
			v.push_back(word);
		}
		for(int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
		cout << endl;
	}
}