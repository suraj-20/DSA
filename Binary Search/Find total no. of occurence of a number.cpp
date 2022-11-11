#include<iostream>
using namespace std;

int firstOcc (int arr[], int n, int element) {
	
	int s = 0, e = n-1;
	
	int mid = s + (e - s)/2;
	
	int ans;
	
	while (s <= e) {
		
		if (arr[mid] == element) {
			
			ans = mid;
			e = mid - 1;
		}
		else if (element > arr[mid]) {
			
			s = mid + 1;
		}
		else {
			
			e = mid - 1;
		}
		
		mid = s + (e - s)/2;
	}
	
	return ans;
}

int lastOcc (int arr[], int n, int element) {
	
	int s = 0, e = n-1;
	
	int mid = s + (e - s)/2;
	
	int ans;
	
	while (s <= e) {
		
		if (arr[mid] == element) {
			
			ans = mid;
			s = mid + 1;
		}
		else if (element > arr[mid]) {
			
			s = mid + 1;
		}
		else {
			
			e = mid - 1;
		}
		
		mid = s + (e - s)/2;
	}
	
	return ans;
}


int main () {
	
	int arr[10] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
	
	int element;
	
	cout << "Enter the element to seach for ";
	
	cin >> element;
	
	int first = firstOcc(arr, 10, element);
	int last = lastOcc(arr, 10, element);
	
	int total = last - first + 1;
	
	cout << "Total no. of occurence of a number is " << total << endl;
}