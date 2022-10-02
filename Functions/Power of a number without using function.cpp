#include<iostream>
using namespace std;

int main () {
	
	int a, b;
	
	cout << "Enter the value of a : ";
	cin >> a;
	
	cout << "Enter the value of b : ";
	cin >> b;
	
	int ans = 1;
	
	for (int i = 1; i <= b; i++) {
		
		ans = ans * a;
		
		cout << ans << endl;
	}
	
	cout << "Answer is : " << ans << endl;
	
	// 2nd time
	
	int c, d;
	
	cout << "Enter the value of a : ";
	cin >> c;
	
	cout << "Enter the value of b : ";
	cin >> d;
	
	ans = 1;
	
	for (int i = 1; i <= d; i++) {
		
		ans = ans * c;
		
		cout << ans << endl;
	}
	
	cout << "Answer is : " << ans << endl;
	
	// 3nd time
	
	int e, f;
	
	cout << "Enter the value of a : ";
	cin >> e;
	
	cout << "Enter the value of b : ";
	cin >> f;
	
	ans = 1;
	
	for (int i = 1; i <= f; i++) {
		
		ans = ans * e;
		
		cout << ans << endl;
	}
	
	cout << "Answer is : " << ans << endl;
}