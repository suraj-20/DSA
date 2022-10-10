#include <iostream>
using namespace std;

void printArray (int arr[], int size) {
	
	cout << "\n Printing the array. \n";
	for (int i = 0; i < size; i++) {
		
		cout << " " << arr[i] << " ";
	}
	cout << "\n Printing is Done.\n";
}

int main () {
	
	// Declaration of array.
	int num[10];
	
	// Accessing an array.
	cout << "\n Value of index 8 is " << num[8] << endl;  // Garbage value.
	
	// Initialising an array.
	int second[3] = {2, 3, 7};
	
	// Accessing an element.
	cout << "\n Value of index 2 is " << second[2] << endl; // 7
	
    // Initialising an array.
	int third[10] = {3, 5, 7};
	
	// Accessing an array.
	cout << "\n Value of index 4 is " << third[4] << endl;  //Garbage value.
	
	// Initialising an array.
	int fourth[15] = {2, 7, 8};
	int n = 15;
	
	printArray(fourth, 15);   // 2  7  8  0  0  0  0  0  0  0  0  0  0  0  0
	
	// Initialising all location with 0..
	int fifth[10] = {0};
	n = 10;
	
	printArray(fifth, 10);    // 0 0 0 0 0 0 0 0 0 0
	
	// Initialising all location with 1..
	int sixth[10] = {1};
	n = 10;
	
	printArray(sixth, 10);    // 1 0 0 0 0 0 0 0 0 0
	
	cout << "\n Everything is Fine." << endl;
	
}