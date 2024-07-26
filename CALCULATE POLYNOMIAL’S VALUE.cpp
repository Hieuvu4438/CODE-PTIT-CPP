#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n, x; 
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++) 
            cin >> a[i];
        int sum = 0, sum1 = 0;
        ll MOD = 1e9 + 7;
        for(int i = n - 1; i >= 0; i--){
        	sum = a[i] * pow(x, i);
        	sum %= MOD;
        	sum1 += sum;
		}
		sum1 %= MOD;
        cout << sum1 << endl;
    }
    return 0;
}
