#include<iostream>
using namespace std;

int fibonacci(int n) {
	
	int a = 0;
	int b = 1;
	
	for (int i = 2; i < n; i++) {
		
		int nextNum = a + b;
		
		a = b;
		b = nextNum;
	}
	return b;
} 
 
int main () {
	
	int n;
	
	cout << "Enter the value of n : ";
	cin >> n;
	
	int ans = fibonacci(n);
	
	cout << "The " << n << "th term of a febonacci series is : "<< ans << endl;
	
	return 0;
}