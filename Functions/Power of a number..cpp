#include <iostream>
using namespace std;

int power (int num1, int num2) {
	
	int ans = 1;
	
	for (int i = 1; i <= num2; i++) {
		
		ans = ans * num1;
	}
	
	return ans;
}


int main () {
	
	int num1, num2;
	
	cout << "Enter first number : ";
	cin >> num1;
	
	cout << "Enter second number : ";
	cin >> num2;
	
	int ans = power(num1, num2);
	
	cout << "Power is : " << ans << endl;
}
               