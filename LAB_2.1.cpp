﻿#include<iostream>
using namespace std;

int main()
{
	int angle1, angle2, angle3;
	cout << "Enter the three angles of triangle:";
	cin >> angle1 >> angle2 >> angle3;

	if (angle1 + angle2 + angle3 == 180)
		cout << "Triangle is valid";
	else
		cout << "Triangle is not valid";


	return 0;
}