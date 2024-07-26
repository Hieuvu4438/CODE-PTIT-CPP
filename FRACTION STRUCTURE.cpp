#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}
struct Fraction{
	int x, y;	
};

void input(Fraction &p){
	cin >> p.x >> p.y;
	
}

void simplify(Fraction &p){
	int ucln = gcd(p.x, p.y);
	p.x = p.x / ucln;
	p.y = p.y / ucln;
}


void print(Fraction &p){
	cout << p.x << "/" << p.y;
}
int main(){
	struct Fraction p;
	input(p);
	simplify(p);
	print(p);
	return 0;
}