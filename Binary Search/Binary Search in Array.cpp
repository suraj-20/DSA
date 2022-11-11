#include <iostream>
using namespace std;

int binarySearch (int arr[], int n, int element) {
	
	int start = 0;
	int end = n - 1;
	
	int mid = start + (end-start)/2;
	
	while (start <= end) {
		
		if (arr[mid] == element) {
			
			return mid;
		}
		
		if (element > arr[mid]) {
			
			start = mid + 1;
		}
		else {
			
			end = mid - 1;
		}
		
		mid = start + (end - start)/2;
	}
	
	return -1;
}


int main () {
	
	int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	
	int element;
	
	cout << "Enter the element to seach for ";
	cin >> element;
	
	int index = binarySearch(arr, 10, element);
	
	cout << "Index of " << element << " is " << index << "." << endl;
	
	return 0;1
}