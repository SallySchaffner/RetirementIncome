// CalculatingDiscounts.cpp : 
// This program shows how calculate a discounted price
//

// main.cpp : 
// This program calculates and displays a discounted price
//

#include <iostream>

using namespace std;

int main()
{
	double originalPrice = 59.95;
	double discountPercentage = 20;

	double discountAmount = originalPrice * discountPercentage / 100;

	cout << "Original Price = $" << originalPrice << endl;
	cout << "Discount Percentage = " << discountPercentage << "%" << endl;
	cout << "Discount amount = $" << discountAmount << endl;
	cout << "Discounted price = $" << (originalPrice - discountAmount) << endl;

	return 0;

}