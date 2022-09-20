#include <iostream>
using namespace std;

int main () {
	
	int a = 4;
	int b = 6;
	
	// Bitwise AND (&) operator.
	cout << " a & b : " << (a & b) << endl;  // In bitwise and both bits must be 1.
	
	// Bitwise OR (|) operator.
	cout << " a | b : " << (a | b) << endl;  // In bitwise or at least 1 of the bit is 1.
	
	// Bitwise NOT (~) operator.
	cout << " ~a : " << (~a) << endl;  
	
	cout << " ~b : " << (~b) << endl;
	
	// Bitwise XOR (^) operator.
	cout << " a ^ b : " << (a ^ b) << endl;  // If different bits -> 1 , If same bits -> 0.
	
	// Using of left shift ( << ).
	
	// a Left shift (<<) by 1. 
	cout << " a << 1 : " << (a << 1) << endl;
	
	// a Left shift (<<) by 2.
	cout << " a << 2 : " << (a << 2) << endl;
	
	// b Left shift (<<) by 1.
	cout << " b << 1 : " << (b << 1) << endl;
	
	// Usign of right shift ( >> ).
	
	// a right shift (>>) by 1.
	cout << " a >> 1 : " << (a >> 1) << endl;
	
	// a right shift (>>) by 2.
	cout << " a >> 2 : " << (a >> 2) << endl;
	
	// b right shift (<<) by 1.
	cout << " b >> 1 : " << (b >> 1) << endl;
	
	// Increment/ Decrement.
	
	int i = 6;
	
	// Post-increment
	cout << " i++ : " << ( i++ ) << endl << " i : " << i << endl; // 6 , i = 7
	
	// Pre-increment 
	cout << " ++i : " << ( ++i ) << endl << " i : " << i << endl; // 8 , i = 8
	
	// Post-decrement
	cout << " i-- : " << ( i-- ) << endl << " i : " << i << endl; // 8 , i = 7
	
	// Pre-decrement
	cout << " --i : " << ( --i ) << endl << " i : " << i << endl; // 6 , i = 6
	
	
}