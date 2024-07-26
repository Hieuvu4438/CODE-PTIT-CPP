#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Examinee{
	string fullname;
	string birth;
	double d1;
	double d2;
	double d3;
};

void input(Examinee &p){
	getline(cin, p.fullname);
	cin >> p.birth;
	cin >> p.d1 >> p.d2 >> p.d3;
}

void print(Examinee &p){
	cout << p.fullname << " " << p.birth << " " << fixed << setprecision(1) << p.d1 + p.d2 + p.d3;
}
int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}
