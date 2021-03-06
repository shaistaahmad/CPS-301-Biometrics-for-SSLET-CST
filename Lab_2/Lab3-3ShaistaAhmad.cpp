// Lab3-3ShaistaAhmad.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Shaista Ahmad
//Write a C++ program that will convert a given U.S. dollar amounts to Japanese Yen and to Euros. 
//Store the conversion factors in the constant names YEN_PER_DOLLAR and EUROS_PER_DOLLAR

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float usDollar, yenValue, euroValue;
	const float yenPerDollar = 120.005;
	const float eurosPerDollar = .881;

	cout << "Enter the amount US Dollars you want to convert: $";
	cin >> usDollar;

	yenValue = usDollar * yenPerDollar;
	euroValue = usDollar * eurosPerDollar;

	cout << fixed << setprecision(2);
	cout << "The yen equivalent in currency is: " << yenValue << " yens" << endl;
	cout << "The euro equivalent in currency is: " << euroValue << " euros" << endl;

}


