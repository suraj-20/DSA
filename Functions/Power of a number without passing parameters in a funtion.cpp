#include <iostream> 
using namespace std;

int power () {
	
	int a, b;
	
	cout << "Enter the value of a : ";
	cin >> a;
	
	cout << "Enter the value of b : ";
	cin >> b;
	
	int ans = 1;
	
	for (int i = 1; i <= b; i++) {
		
		ans = ans * a;
	} 
	
	return ans;
}


int main () {
	
	int answer = power();
	cout << "Power is : " << answer << endl;
	
	int answer1 = power();
	cout << "Power is : " << answer1 << endl;
	
	int answer2 = power();
	cout << "Power is : " << answer2 << endl;
	
	int answer3 = power();
	cout << "Power is : " << answer3 << endl;
	
	int answer4 = power();
	cout << "Power is : " << answer4 << endl;
	
	return 0;
}