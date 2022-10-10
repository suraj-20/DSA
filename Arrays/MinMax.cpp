#include <iostream>
using namespace std;

int getMin(int num[], int n) {
	
	int minimum = INT_MAX;
	
	for (int i = 0; i < n; i++) {

		// minimum = min(minimum, num[i]);
				
		if (num[i] < minimum) {
			
			minimum = num[i];
		}
	}
	
	// Returning minimum value.
	
	return minimum;
}

int getMax(int num[], int n) {
	
	int maximum = INT_MIN;
	
	for (int i = 0; i < n; i++) {
		
		// maximum = max(maximum, num[i]);
		
		if (num[i] > maximum) {
			
			maximum = num[i];
		}
	}
	
	// Returning maximum value.
	return maximum;
}

int main() {
	
	int size;
	
	cout << "\n Enter the size of an array : ";
	cin >> size;
	
	int num[100];
	
	// Taking input in an array.
	cout << "\n Array : " ;
	for (int i = 0; i < size; i++) {
	    
		cin >> num[i];
	}
	
	cout << "\n Minimum value is " << getMin(num, size) << endl;
	cout << "\n Maximum value is " << getMax(num, size) << endl;
}