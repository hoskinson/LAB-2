﻿#include<iostream>
using namespace std;

int main()
{
	int n, sum_p = 0, sum_n = 0, sum_z = 0;
	char choice;

	do
	{
		cout << "Enter number ";
		cin >> n;

		if (n > 0)
			sum_p++;
		else if (n < 0)
			sum_n++;
		else
			sum_z++;

		cout << "Do you want to Continue(y/n)? ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');


	cout << "Positive Number :" << sum_p << "\nNegative Number :" << sum_n << "\nZero Number :" << sum_z;


	return 0;
}