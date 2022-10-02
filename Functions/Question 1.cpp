#include <iostream>
using namespace std;

void update (int a) {
	
	a = a / 2;
	
	cout << "Value of a by 2 is : " << a << endl;
	
}

int main () {
	
	int a = 10;
	
	update(a);
	
	cout << "Value of a is : " << a << endl;
	
}