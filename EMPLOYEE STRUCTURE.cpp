#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Employee{
	string name;
	string gender;
	string birth;
	string address;
	string tax;
	string date;
};

void input(Employee &a){
	getline(cin, a.name);
	cin >> a.gender >> a.birth;
	cin.ignore();
	getline(cin, a.address);
	cin >> a.tax >> a.date;
}

void print(Employee &a){
	cout << "00001" << " " << a.name << " " << a.gender << " " << a.birth << " " << a.address << " " << a.tax << " " << a.date; 
}
int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}

