#include <iostream>
using namespace std;

int main () {
	
	float fahrenheit;
	
	cout << "Fahrenheit : " ;
	cin >> fahrenheit;
	
	float celsius = (5.0 / 9) * (fahrenheit - 32);
	
	cout << fahrenheit << " F = " << celsius << " C" << endl;
}