#include <iostream>
using namespace std;

int main () {
	
	int num = 1;
	
	switch ( num ) {
		
		case 1: cout << "Monday" << endl;
		        cout << "Tuesday" << endl;
		        // continue;                    continue in not valid in switch statement.
		        cout << "Wednesday"  << endl;
		        break;
		case 2: cout << "Thursday" << endl;
		        cout << "Friday" << endl;
		        break;
	}
		        
}