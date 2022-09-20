#include <iostream>
using namespace std;

int main () {
	
	int a , b = 1;
	a = 10;
	
	if (++a) {
		
		cout << "a = " << a << endl;
		cout << "b = " << b ;
	}
	else {
		
		cout << "++b = " << ++b ;
	}
}