#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void to_lower(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}
int main(){
	ifstream in;
	ofstream out;
	in.open("VANBAN.in.txt");
	string n;
	set <string> se;
	while(in >> n){
		to_lower(n);
		se.insert(n);
	}
	for(auto it : se){
		cout << it << endl;
	}
}