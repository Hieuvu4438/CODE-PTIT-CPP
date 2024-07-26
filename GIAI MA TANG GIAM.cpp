#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(s == "I"){
			cout << 12 << endl;
			continue;
		}
		if(s == "D"){
			cout << 21 << endl;
			continue;
		}
		stack<int> st;
		int res = 1;
		st.push(res);
		++res;
		for(int i = 0; i < s.size(); i++){
//			cout << i << " " << s[i] << endl;
			if(s[i] == 'D'){
				st.push(res);
				++res;
			}
			else if(s[i] == 'I'){
				while(!st.empty()){
					cout << st.top();
					st.pop();
				}
				st.push(res);
				++res;
			}
		}
		while(!st.empty()){
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}