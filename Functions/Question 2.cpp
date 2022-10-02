#include <iostream>
using namespace std;

int update (int a) {
	
	a -= 5;
	
	return a;
}

int main () {
	
	int a = 15;
	
    update(a);
	
	cout << "Value of a is : " << a << endl;
	
}