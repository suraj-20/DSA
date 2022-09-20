#include <iostream>
using namespace std;

int main () {
	
	int a;
	
	cout << "Enter the value of a : " ;
	cin >> a;
	
	if (a > 0) {
		cout << "the number is positive.";
    }
    else {
    	if (a == 0) {
    		cout << "the number is 0.";
		}
		else {
			cout << "the number is negative.";
		}
	}
}