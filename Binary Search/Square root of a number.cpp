#include <iostream>
using namespace std;

int sqrt(int n) {
	
	int s = 0;
	int e = n - 1;
	
	int mid = s + (e - s)/2;
	int ans;
	
	while (s <= e) {
		
		int square = mid * mid;
		
		if (square == n) {
			return mid;
		}
		else if (square < n) {
			ans = mid;
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
		mid = s + (e - s)/2;
	}
	return ans;
}

double morePrecision(int n, int precision, int tempSol) {
	
	double factor = 1;
	double ans = tempSol;
	
	for (int i = 0; i < precision; i++) {
		
		factor = factor/10;
		
		for (double j = ans; j*j<n; j= j+factor) {
			
			ans = j;
		}
	}
	return ans;
}


int main () {
	
	int n;
	
	cout << "Enter the number n ";
	
	cin >> n;
	
	int tempSol = sqrt(n);
	
	cout << "Square root of " << n << " is " << morePrecision(n, 3, tempSol) << "." << endl; 
}