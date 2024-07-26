#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void chuanHoa1(string s){
	string tmp = "";
	string word;
	stringstream ss(s);
	vector<string> v;
	while(ss >> word){
		word[0] = toupper(word[0]);
		for(int i = 1; i < word.size(); i++){
			word[i] = tolower(word[i]);
		}
		v.push_back(word);
	}
	cout << v[v.size() - 1] << " ";
	for(int i = 0; i < v.size() - 1; i++) cout << v[i] << " ";
	cout << endl;
}

void chuanHoa2(string s){
	string word;
	stringstream ss(s);
	vector<string> v;
	while(ss >> word){
		word[0] = toupper(word[0]);
		for(int i = 1; i < word.size(); i++){
			word[i] = tolower(word[i]);
		}
		v.push_back(word);
	}
	for(int i = 1; i < v.size(); i++) cout << v[i] << " ";
	cout << v[0] << endl;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		int n; cin >> n;
		cin.ignore();
		string s; getline(cin, s);
		if(n == 1){
			chuanHoa1(s);
		}
		else if(n == 2){
			chuanHoa2(s);
		}
	}
}