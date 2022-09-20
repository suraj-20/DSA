#include <iostream>
using namespace std;

int main () {
	
	char a;
	
	cout << "Enter a charecter : ";
	cin >> a;
	
	if (a >= 'a' && a <= 'z') {
		cout << "This is lower case" << endl;
	}
	else if (a >= 'A' && a <= 'Z') {
		cout << "This is upper case" << endl;
	}
	else {
		cout << "This is a digit" << endl;
	}
}