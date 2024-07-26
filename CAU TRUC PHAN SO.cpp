#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

struct PhanSo{
	ll x, y;
};
void nhap(PhanSo &a){
	cin >> a.x >> a.y;
}
ll rutgon(PhanSo a){
	ll res = gcd(a.x, a.y);
	return res;
}

void in(PhanSo a){
	rutgon(a);
	cout << a.x / rutgon(a) << "/" << a.y / rutgon(a);
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
