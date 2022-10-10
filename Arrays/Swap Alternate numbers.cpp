#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n) {
	
	for (int i = 0; i < n; i+=2) {
		
		if (i+1 < n) {
			
			swap(arr[i], arr[i+1]);
		}
	}
}

void printArray (int arr[], int n) {
	
	for (int i = 0; i < n; i++) {
		
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main () {
	
	int arr1[8] = {9, 2, 8, 3, 7, 4, 6, 5};
	int arr2[5] = {1, 7, 2, 8, 3};
	
	swapAlternate(arr1, 8);
	printArray(arr1, 8);
	
	cout << endl;
	
	swapAlternate(arr2, 5);
	printArray(arr2, 5);
	
}