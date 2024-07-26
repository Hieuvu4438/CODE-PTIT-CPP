#include <bits/stdc++.h>
using namespace std;
void to_upper(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
 	}
}
int main(){
	string s; getline(cin, s);
	stringstream ss(s);
	string word;
	string tmp = "";
	vector <string> v;
	while(ss >> word){
		word[0] = toupper(word[0]);
		for(int i = 1; i < word.size(); i++){
			word[i] = tolower(word[i]);
		}
		v.push_back(word);
	}
	for(int i = 0; i < v.size() - 1; i++){
		cout << v[i];
		if(i != v.size() - 2) cout << " ";
	}
	cout << ", ";
	to_upper(v[v.size() - 1]);
	cout << v[v.size() - 1];
	
}