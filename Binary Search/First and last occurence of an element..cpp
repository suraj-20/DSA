#include <iostream>
using namespace std;

int firstOcc (int arr[], int n, int key) {
	
	int start = 0;
	int end = n-1;
	
	int mid = start +  (end - start)/2;
	
	int ans ;
	
	while (start <= end) {
		
		if (arr[mid] == key) {
			
			ans = mid;
			end = mid - 1;
		}
		else if (key > arr[mid]) {
			
			start = mid + 1;
		}
		else {
			
			end = mid - 1;
		}
		
		mid = start + (end - start)/2;
	}
	
	return ans;
}

int lastOcc (int arr[], int n, int key) {
	
	int start = 0;
	int end = n-1;
	
	int mid = start +  (end - start)/2;
	
	int ans = mid;
	
	while (start <= end) {
		
		if (arr[mid] == key) {
			
			ans = mid;
			start = mid + 1;
		}
		else if (key > arr[mid]) {
			
			start = mid + 1;
		}
		else {
			
			end = mid - 1;
		}
		
		mid = start + (end - start)/2;
	}
	
	return ans;
}


int main () {
	
	int arr[10] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
	
	int key;
	
	cout << "Enter the element to search for ";
	cin >> key;
	
	int first = firstOcc(arr, 10, key);
	int last = lastOcc(arr, 10, key);
	
	cout << "First occurence of " << key << " is at Index " << first << endl;
	cout << "Last occurence of " << key << " is at Index " << last << endl;
}