#include <iostream>
using namespace std;

int main () {
	
	int a = 5;
	int b = 6;
	
	bool first = (a < b);
	cout << "a < b : " << first << endl;

	bool second = (a > b);
	cout << "a > b : " << second << endl;
	
	bool third = (a <= b);
	cout << "a <= b : " << third << endl;
	
	bool forth = (a >= b);
	cout << "a >= b : " << forth << endl;
	
	bool fifth = (a != b);
	cout << "a != b : " << fifth << endl;
	
	bool sixth = (a == b);
	cout << "a == b : " << sixth << endl;
	
}