#include<iostream>
using namespace std;

int main () {
	
	int a = 1, b = 2;
	
	if (a-- > 0 && ++b > 2) {
		
		cout << "Stage1 - Inside If " << endl;
	}
	else {
		
		cout << "Stage2 - Inside else " << endl;
	}
	cout << "a = " << a << endl;  // 0
	cout << "b = " << b << endl;  // 3
}