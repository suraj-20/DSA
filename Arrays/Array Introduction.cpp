#include<iostream>
using namespace std;

int main() {
	
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
	int fourth[10] = {2, 7, 8};
	int n = 10;
	
	cout << "\n Printing the array. \n";
	for (int i = 0; i < n; i++) {
		
		cout << " " << fourth[i] << " ";  // 2 7 8 0 0 0 0 0 0 0
	}
	cout << "\n";
	
	// Initialising all location with 0..
	int fifth[10] = {0};
	n = 10;
	
	cout << "\n Printing the array. \n";
	for (int i = 0; i < n; i++) {
		
		cout << " " << fifth[i] << " ";  // 0 0 0 0 0 0 0 0 0 0
	}
	cout << "\n";
	
	// Initialising all location with 1..
	int sixth[10] = {1};
	n = 10;
	
	cout << "\n Printing the array. \n";
	for (int i = 0; i < n; i++) {
		
		cout << " " << sixth[i] << " ";  // 1 0 0 0 0 0 0 0 0 0
	}
	cout << "\n";
	
	cout << "\n Everything is Fine." << endl;
}