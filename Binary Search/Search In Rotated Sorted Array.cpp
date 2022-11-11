#include <iostream>
using namespace std;

int getPivot (int arr[], int n) {
	
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s)/2;
	
	while (s < e) {
		
		if (arr[mid] >= arr[0]) {
			s = mid + 1;
		}
		else {
			e = mid;
		}
		mid = s + (e - s)/2;
	}
	return s;
}

int binarySearch (int arr[], int s, int e, int element) {
	
	int start = s;
	
	int end = e;
	
	int mid = (start + end)/2;
	
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
		
		mid = (start + end)/2;
	}
	
	return -1;
}



int main () {
	
	int arr[7] = {2, 4, 5, 6, 8, 9, 1};
	
	int n;
	
	int key ;
	cout << "Enter the element : ";
	cin >> key;
	
	int pivot = getPivot (arr, 7);
	
	if (arr[pivot] <= key <= arr[n-1]) {
		cout << binarySearch(arr, pivot, n-1,  key) << endl;
	}                         
	else {
		cout << binarySearch(arr, 0, pivot - 1, key) << endl;
	}                         
	
	return 0;
	
}