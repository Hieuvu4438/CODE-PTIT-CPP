#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string chuanHoa(string s){
	string tmp = "";
	string word;
	stringstream ss(s);
	vector <string> v;
	while(ss >> word){
		for(int i = 0; i < word.size(); i++) word[i] = tolower(word[i]);
		v.push_back(word);
	}
	tmp += v[v.size() - 1];
	for(int i = 0; i < v.size() - 1; i++) tmp += v[i][0];
	return tmp;
}
vector<string> vt;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		vt.push_back(chuanHoa(s));
		int cnt = 1;
		for(int i = 0; i < vt.size() - 1; i++){
			if(vt[vt.size() - 1] == vt[i]) ++cnt;
		}
		string tmp = to_string(cnt);
		if(tmp != "1"){
			cout << chuanHoa(s) + tmp + "@ptit.edu.vn" << endl;
			
		} 
		else cout << chuanHoa(s) + "@ptit.edu.vn" << endl;
		cnt = 1;
	}
}