#include <iostream>
using namespace std;

void update (int arr[], int n) {
	
	cout << "Inside the function" << endl;
	
	// Updating the array
	arr[2] = {9};
	
	// Printing the array
	for (int i = 0; i < 3; i++) {
		
		cout << arr[i] << " ";
	}
	cout << endl;
	
	cout << "Going back to main function" << endl;
}

int main () {
	
	int arr[3] = {1 ,3 ,5};
	
	update(arr, 3);
	
	cout << "\nPrinting the array in main function" << endl;
	// Printing the array
	for (int i = 0; i < 3; i++) {
		
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}