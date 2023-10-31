// Week 2 Arithmetic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/// <summary>
/// This assignment will show arithmetic operations 
/// </summary>
/// <returns></returns>

int main()
{
	// Prompting two integer numbers
	// Declaring int variables and one double variable for each operation
	int number1, number2;
	int answer;
	double answer2;

	// Request values from user
	cout << "Please enter an integer number." << endl;
	cin >> number1; // inputs first number from user into number1
	cout << "Please enter another integer number." << endl;
	cin >> number2; // inputs second number from user into number2
	cout << endl << endl;
	cout << "Your numbers are: " << number1 << " and " << number2 << endl;

	// Performing arithmetic operations
	answer = number1 + number2; // addition
	cout << number1 << " + " << number2 << " = " << answer << endl;

	answer = number1 - number2; // subtraction 
	cout << number1 << " - " << number2 << " = " << answer << endl;

	answer = number1 * number2; // multiplication 
	cout << number1 << " * " << number2 << " = " << answer << endl;

	answer = number1 / number2; // division between integer numbers
	cout << number1 << " / " << number2 << " = " << answer << endl;

	answer2 = (double)number1 / number2; // Casting a double variable for floating point division 
	cout << number1 << " / " << number2 << " = " << answer2 << endl;

	answer = number1 % number2; // modulus 
	cout << number1 << " % " << number2 << " = " << answer << endl;
	cout << endl << endl; // Printing two blank lines at the end

	return 0;
}

