#include<iostream>
using namespace std;

int sum (int arr[], int n) {
	
	int sum = 0;
	
	for (int i = 0; i <=n; i++) {
		
		sum = arr[i] + sum;
	}
	
	return sum;
}

int main () {
	
	int size;
	
	cout << "Enter the size of an array : ";
	cin >> size;
	
	int num[100];
	
	// Taking input in an array.
	cout << "Array : ";
	for (int i = 0; i < size; i++) {
		
		cin >> num[i];
	}
	
	int ans = sum(num, size);
	
	// Printing sum of an array.
	cout << "Sum of an array is : " << ans << endl;
	
}