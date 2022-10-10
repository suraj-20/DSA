#include <iostream>
using namespace std;

bool search(int arr[], int n, int element) {
	
	for (int i = 0; i <= n; i++) {
		
		if (arr[i] == element) {
			return 1;
		}
	}
	return 0;
}

int main () {
	
	int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 21};
	
	int element;
	
	cout << "Enter the element to search for : " ;
	
	cin >> element;
	
	bool ans = search(arr, 10, element);
	
	if (ans) {
		
		cout << "Element is present." << endl;
	}
	else {
		
		cout << "Elenent is absent." << endl;
	}
}