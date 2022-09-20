#include<iostream>
using namespace std;

int main () {
	
	int n ;
	
	cout << "Enter a number : ";
	cin >> n;
	
	int i, sum = 0;

	
	for (i = 1 ; i <= n ; i++) {
		
		sum = sum + i;
	}
	
	cout << "Sum of all number from " << 1 << " to " << n << " = " << sum << endl;
}