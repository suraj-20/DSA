#include <iostream>
using namespace std;

int main () {
	
	int n ;
	
	cout << "Enter a number : ";
	cin >> n;
	
	int i = 1, sum = 0;
	
	while (i <= n) {
		
		sum = sum + i;
		i = i + 1;
	}
	
	cout << "Sum from " << 1 << " to " << n << " = " << sum << endl;
}