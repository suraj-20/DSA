#include <iostream>
using namespace std;

int main () {
	
	int n ;
	
	cout << "Enter the number : ";
	cin >> n;
	
	int i = 2, sum = 0;
	
	while (i <= n) {
		
		sum = sum + i;
		i = i +2;
	}
	
	cout << "Sum of all even numbers from " << 1 << " to " << n << " = " << sum << endl;
}