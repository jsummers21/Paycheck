// Paycheck.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	double GrossAmount = 0.00;
	double FederalIncomeTax = 0.15 ;
	double StateTax = 0.0;
	double SocialSecTax = 0.0575;
	double Medicare = 0.0275;
	double Pension = 0.05;
	double HealthInsur = 75.00;
	char employee[255];
	cout << "Enter Employee Name: ";

	cin >> employee;

	cout << "Enter the gross pay: ";

	cin >> GrossAmount;

	cout << employee << endl;
	cout << "Gross Amount: $" << GrossAmount << endl;
	cout << "Federal Tax: $" << GrossAmount * FederalIncomeTax << endl;
	cout << "State Tax: $" << GrossAmount * StateTax << endl;
	cout << "Social Security Tax: $" << GrossAmount * SocialSecTax << endl;
	cout << "Medicare Tax: $" << GrossAmount * Medicare << endl;
	cout << "Pension Plan: $" << GrossAmount * Pension << endl;
	cout << "Health Insurance: $" << HealthInsur << endl;

	
	return 0;
}


