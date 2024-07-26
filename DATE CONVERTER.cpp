#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
	int n; cin >> n;
	int y = n / 365;
	n %= 365;
	int w = n / 7;
	n %= 7;
	int d = n;
	cout << y << " " << w << " " << d;
}