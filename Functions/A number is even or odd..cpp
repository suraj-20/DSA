#include<iostream>
using namespace std;

bool isEven (int a) {
	
	if (a % 2 == 0) {
		
		return 1;
	}
	else {
		
		return 0;
	}
}


int main () {
	
	int num;
	
	cout << "Enter the number : ";
	cin >> num;
	
	if (isEven(num)) {
		
		cout << "Number is even.";
	}
	else {
		
		cout << "Number is odd.";
	}
	
	return 0;
}