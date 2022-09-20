#include <iostream>
using namespace std;

int main ( ){
	
	int a = 1;
	int b = a++;
	
	cout << " b = " << b << endl << " a = " << a << endl; // b = 1 , a = 2
	
	int c = ++a;
	
	cout << " c = " << c << endl << " a = " << a << endl;  // c = 3 , a = 3
}