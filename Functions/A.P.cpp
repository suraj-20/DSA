#include<iostream>
using namespace std;

int AP (int n) {
	
	/*
	int a, b;
	
	cout << "Enter the value of a : ";
	cin >> a;
	
	cout << "Enter the value of b : ";
	cin >> b;
	*/
	
	int ap = (3 * n + 7);
	
	return ap;
} 



int main () {
	
	int n;
	
	cout << "Enter the value of n : ";
	cin >> n;
	
	int ans = AP(n);
	
	cout << "Answer is : " << ans << endl;
	
	return 0;
}