#include<iostream>
using namespace std;

bool isPrime(int n) {
	
	for (int i = 2; i < n; i++) {
		
		if (n % i == 0) {
			
			return 0;
		}
	}
	
	return 1;
}

int main () {
	
	int n;
	
	cout << "Enter the value of n : ";
	cin >> n;
	
	if (isPrime(n)) {
		
		cout << "is a Prime number.";
	}
	else {
		
		cout << "not a Prime number.";
	}
	
	return 0;
}