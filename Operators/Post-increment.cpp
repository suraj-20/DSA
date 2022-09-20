#include<iostream>
using namespace std;

int main () {
	
	int i = 7;
	int a = 2;
	
	int sum = a + (i++);
	
	cout << "a + (i++) : " << sum << endl;
	
	cout << "a : " << a << endl;
	
	cout << "i : " << i << endl;
}