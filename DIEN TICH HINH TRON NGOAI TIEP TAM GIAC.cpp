#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define PI 3.141592653589793238
struct point{
	double a, b;
	
	double distance(point p){
		return sqrt(pow(a - p.a, 2) + pow(b-p.b, 2));
	}
};

void solve(point x, point y, point z){
	double x1 = x.distance(y), x2 = x.distance(z), x3 = y.distance(z);
	if(x1 <= 0 || x2 <= 0 || x3 <= 0 || x1 + x2 <= x3 || x2 + x3 <= x1 || x1 + x3 <= x2){
		cout <<"INVALID\n";
		return;
	}
	double p = (x1 + x2 + x3) / 2;
	double dt = sqrt(p*(p-x1) * (p - x2) * (p-x3));
	double r = x1 * x2 * x3 / (4 * dt);
	cout << fixed << setprecision(3) << PI * r * r << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		point x, y, z;
		cin >> x.a >> x.b >> y.a >> y.b >> z.a >> z.b;
		solve(x, y, z);
	}
}

