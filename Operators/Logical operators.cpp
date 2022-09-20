#include <iostream>
using namespace std;

int main () {
	
	int a = 5, b = 10, c = 15;
	
	// In logical AND (&) all the condition must be ture.
	cout << "((a > 0) && (b = 0) && (c <= 15)) : " << ((a > 0) && (b = 0) && (c <= 15)) << endl;
	
	// In logical OR (|) at least one condition must be ture.
	cout << "((a > 5) || (b < 10) || (c >= 15)) : " << ((a > 5) || (b < 10) || (c >= 15)) << endl;
	
	// In logical not (!) inverts the logic i.e, T <--> F, F <--> T.
	int d = 1 , e = 0;
	cout << "(!d) : " << (!d) << endl;
	
	cout << "(!e) : " << (!e) << endl;
}