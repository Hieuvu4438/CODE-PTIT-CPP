#include <bits/stdc++.h>
using namespace std;

struct Employee{
	string name, gender, ns, addr, tax, date;
};

void input(Employee &a){
	cin.ignore();
	getline(cin, a.name);
	cin >> a.gender >> a.ns;
	cin.ignore();
	getline(cin, a.addr);
	cin >> a.tax >> a.date;
	
}

void printlist(Employee a[], int n){
	for(int i = 0; i < n; i++){
		string s = to_string(i+1);
		s = string(5 - s.size(), '0') + s;
		cout << s << " ";
		cout << a[i].name << " " << a[i].gender << " " << a[i].ns << " " << a[i].addr << " " << a[i].tax << " " << a[i].date << endl;
	}
}
int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}
