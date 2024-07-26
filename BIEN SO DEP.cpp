#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check1(string s){
	for(int i = 0 ; i < 4; i++){
		if(s[i] >= s[i+1])
			return false;
	}
	return true;
}
 
bool check2(string s){
	char tmp = s[0];
	for(char x : s){
		if(tmp != x) return false;
	}
	return true;
}
 
bool check3(string s){
	return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}
 
bool check4(string s){
	for(char x : s){
		if(!(x == '6' || x == '8')) return false;
	}
	return true;
}
 
 
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		string s1 = s.substr(5, 6);
		s1.erase(3, 1);
		if(check1(s1) || check2(s1) || check3(s1) || check4(s1))
			cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
