// main.cpp : 
// This program shows how to extract digits mathematically from an integer
//

#include <iostream>

using namespace std;

int main()
{
	int digit1, digit2, digit3, digit4;
	int number = 303;

	// Extract low order digit and then recalculate the number without it. 
	digit1 = number % 10;
	number = number / 10;

	cout << "number is now: " << number << endl;

	digit2 = number % 10;
	number = number / 10;

	cout << "number is now: " << number << endl;

	digit3 = number % 10;
	number = number / 10;

	cout << "number is now: " << number << endl;

	digit4 = number % 10;
	number = number / 10;

	cout << "number is now: " << number << endl;

	cout << "Digits are: " << digit4 << " " << digit3 << " " << digit2 << " " << digit1 << endl;

	return 0;
}
