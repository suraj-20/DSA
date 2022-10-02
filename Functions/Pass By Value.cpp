#include<iostream>
using namespace std;

void dummy(int a) {
	
	a++;
	cout << "Vaue of a is : " << a << endl;
}



int main () {
	
	int n;
	
	cout << "Enter the value of n : ";
	cin >> n;
	
	dummy(n);
	
	cout << "Value of n  is : " << n << endl;
	
	return 0;
}