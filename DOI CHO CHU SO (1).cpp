#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		vector<int> v;
		for(int i = 0; i < s.size(); i++){
			v.push_back(s[i] - '0');
		}
		int i = v.size() - 2;
		while(i >= -1 && v[i] < v[i+1]) --i;
		if(i == -1) cout << "-1" << endl;
		else{

			if(i != v.size() - 1)
				swap(v[i], v[i+1]);
			else swap(v[i], v[i-1]);
			for(int i = 0; i < v.size(); i++) cout << v[i];
			cout << endl;
			
		}
		
	}
}