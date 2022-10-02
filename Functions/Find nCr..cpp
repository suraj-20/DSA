#include<iostream>
using namespace std;


int factorial (int n) {
	
	int fact = 1;
	
	for (int i = 1; i <= n; i++) {
		
		fact = fact * i;
	}
	
	return fact;
}

int nCr (int n, int r) {
	
	int numerator = factorial(n);
	
	int denomenator = factorial(r) * factorial(n - r);
	
	int ans = numerator / denomenator;
	
	return ans;
}



int main () {
	
	int n, r; 
	
	cout << "Enter the value of n : ";
	cin >> n;
	
	cout << "Enter the value of r : ";
	cin >> r;
	
	cout << "\nFactorial1 of nCr is : " << nCr(n,r) << endl;
	
	return 0;	
}