#include <iostream>
using namespace std;

int main () {
	
	int i = 6;
	int a = 3;
	
	int sum = a + (--i) ;
	
	cout << "a + (--i) : " << sum << endl;
	
	cout << "i : " << i << endl;
}