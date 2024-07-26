#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void to_lower(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	string s; getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word){
		to_lower(word);
		v.push_back(word);
	}
	cout << v[v.size() - 1];
	for(int i = 0; i < v.size() - 1; i++){
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
}