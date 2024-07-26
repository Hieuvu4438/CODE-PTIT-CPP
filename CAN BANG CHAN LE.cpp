#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int checkdem(int n){
	int res = 0;
	int demchan = 0, demle = 0;
	while(n){
		int res = n % 10;
		if(res % 2 == 0) ++demchan;
		else ++demle;
		n /= 10;
	}
	if(demchan == demle) return 1;
	else return 0;
}
int main(){
	int n; cin >> n;
	int cnt = 0;
	int a = pow(10, n - 1);
	int b = pow(10, n);
	for(int i = a; i < b; i++){
		if(checkdem(i)){
			cout << i;
			++cnt;
			if(cnt < 10) cout << " ";
			else{
				cnt = 0;
				cout << endl;
			} 
		}
	}
}