// RetirementIncome.cpp : 
// This program shows how much needs to be deducted 
// from your salary to reach your retirement goal.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double monthlySalary = 6000;
	double percentToDeduct_1 = 5;
	double percentToDeduct_2 = 7;
	double percentToDeduct_3 = 10;
	double amountDeducted;

	cout << "First potential deduction: " << endl;
	amountDeducted = monthlySalary * (percentToDeduct_1 / 100);
	cout << "Percent dedducted: " << 5 << "% ";
	cout << "Amount deducted: $" << amountDeducted << endl;
	cout << "--------------------------------------------------" << endl;

	cout << "Second potential deduction: " << endl;
	amountDeducted = monthlySalary * (percentToDeduct_2 / 100);
	cout << "Percent dedducted: " << 7 << "% ";
	cout << "Amount deducted: $" << amountDeducted << endl;
	cout << "--------------------------------------------------" << endl;

	cout << "Third potential deduction: " << endl;
	amountDeducted = monthlySalary * (percentToDeduct_3 / 100);
	cout << "Percent dedducted: " << 10 << "% ";
	cout << "Amount deducted: $" << amountDeducted << endl;

	return 0;

}
