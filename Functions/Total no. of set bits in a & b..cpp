#include <iostream>
using namespace std;

int setBitB(int b) {
	
	int count = 0;
	
	while (b != 0) {
		
		if (b & 1) {
			
			count ++;
		}
		b = b >> 1;
	}
	return count;
}

int setBitA(int a) {
	
	int count = 0;
	
	while (a != 0) {
		
		if (a & 1) {
			
			count ++;
		}
		a = a >> 1;
	}
	return count;
}

int main () {
	
	int a, b;
	
	cout << "Enter the value of a : ";
	cin >> a;
	
	cout << "Enter the value of b : ";
	cin >> b;
	
	int ans1 = setBitA(a);
	int ans2 = setBitB(b);
	
	cout << "Set Bits of A : " << ans1 << endl;
	cout << "Set bits of B : " << ans2 << endl;
	
	int ans = ans1 + ans2;
	
	cout << "Total no. of set bits in a and b is : " << ans << endl;
	
	return 0;
}