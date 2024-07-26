#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int t; cin >> t;
	while(t--){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		double distance = sqrt((double)(x1 - x2) * (x1 - x2) + (double) (y1 - y2) * (y1 - y2));
		cout << fixed << setprecision(4) << distance << endl;
	}
}