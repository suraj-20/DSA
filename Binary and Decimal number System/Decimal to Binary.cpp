#include <iostream>
#include <math.h>
using namespace std;

int main () {
	
	int n ;
	
	cout << "Enter a number : ";
	cin >> n ;
	
	long long int i = 0, ans = 0;
	
	while (n != 0) {
		
		int bit = n & 1;
		
		ans = (bit * pow(10, i)) + ans;
		
		n = n >> 1;
		
		i ++;
	}
	
	cout << "Answer is " << ans << endl;
}