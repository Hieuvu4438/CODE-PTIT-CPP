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
	ifstream in1;
	ofstream out;
	in1.open("DATA1.in.txt");
	in.open("DATA2.in.txt");
	string n1, n2;
	set <string> se;
	set <string> se2;
	map<string, int> mp;
	while(in1 >> n1){
		to_lower(n1);
		se.insert(n1);
		mp[n1]++;
	}
	while(in >> n2){
		to_lower(n2);
		se.insert(n2);
		if(mp[n2] != 0){
			se2.insert(n2);
		}
	}
	for(auto it : se) cout << it << " ";
	cout << endl;
	for(auto it : se2) cout << it << " ";
}