#include <iostream>
using namespace std;

int main () {
	
	int n;
	
	cout << "Enter a number : ";
	cin >> n;
	
	int i = n;
	
	while (i >= 1) {
		
		int j = n;
		while (j >= n) {
			
			cout << i ;
			j = j -1 ;
		}
		cout << endl;
		i = i - 1;
	}
}