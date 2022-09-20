#include <iostream>
using namespace std;

int main () {
	
	int a, b;
	
	cout << "Enter 1st number : ";
	cin >> a;
	
	cout << "Enter 2nd number : ";
	cin >> b;
	
	if(a > b) {
		cout << "a is greater then b." << endl;
	} 
	if(b > a) {
		cout << "b is greater then a." << endl;
	}
	if(a < b) {
		cout << "a is less then b." << endl;
	}
	if(b < a) {
		cout << "b is less then a." << endl;
	}
}