// selection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/// <summary>
/// This is a calculator program with arithmetic operations. It demonstrates functions, subroutines, selection statements, and error checking.
/// The purpose is to prevent the division and modulus equation from occurring if the value for number 2 is equal to zero. 
/// </summary>
/// <returns></returns>

int main()
{
	// Stating variable declarations
	int number1, number2;
	int answer;
	double answer2;

	// Function prototypes 
	int enter_int(string instruction);
	void printblanklines();
	int add(int, int);
	int subtract(int, int);
	int multiply(int, int);
	int divide(int, int);
	double float_divide(int, int);
	int mod(int, int);
	void show_equation(int, int, int, string);
	void show_float(int, int, double, string);

	// Main Code
	number1 = enter_int("Please enter a number."); // Prompts the user to enter a number twice.
	number2 = enter_int("Please enter another number greater than zero.");
	printblanklines();
	answer = add(number1, number2); // Addition
	show_equation(number1, number2, answer, " + ");

	answer = subtract(number1, number2); // Subtraction
	show_equation(number1, number2, answer, " - ");

	answer = multiply(number1, number2); // Multiplication
	show_equation(number1, number2, answer, " * ");

	/* The following selection statements will show error checking for the division, floating point division, and modulus equations.
	The error checking will check if the user entered a zero for number 2. If the user did, an error statement will output to the screen.*/
	if (number1 >= 0 && number2 > 0) {
		answer = divide(number1, number2); // Division
		show_equation(number1, number2, answer, " / ");

		answer2 = float_divide(number1, number2); // Floating point division
		show_float(number1, number2, answer2, " / ");

		answer = mod(number1, number2); // Modulus
		show_equation(number1, number2, answer, " % ");
	}
	else if (number2 == 0) { // This outputs that the zero value is not valid for the equations.
		cout << "Sorry, zero is not a valid choice for division." << endl;
		cout << "Sorry, zero is not a valid choice for floating point division." << endl;
		cout << "Sorry, zero is not a valid choice for modulus." << endl;
	}
	else if (number2 < 1) {  // This states that if the user picked a value less than 1 for number 2, the modulus equation will not work.
		cout << "Sorry, not a valid choice for modulus." << endl;
		answer = divide(number1, number2);
		show_equation(number1, number2, answer, " / ");

		answer2 = float_divide(number1, number2);
		show_float(number1, number2, answer2, " / ");
	}

	return 0;
}
// Subroutines

/* Provides the user with an instruction that prompts the user to enter a number.
Then inputs and returns the number that the user selects.*/
int enter_int(string instruction) {
	int number;
	cout << instruction << " ";
	cin >> number;
	return number;
}

// Prints two blank lines.
void printblanklines() {
	cout << endl;
	cout << endl;
}

// Provides the formula for adding the numbers and returns the answer.
int add(int number1, int number2) {
	int answer;
	answer = number1 + number2;
	return answer;
}

// Provides the formula for subtracting the numbers and returns the answer.
int subtract(int number1, int number2) {
	int answer;
	answer = number1 - number2;
	return answer;
}

// Provides the formula for multiplying the numbers and returns the answer.
int multiply(int number1, int number2) {
	int answer;
	answer = number1 * number2;
	return answer;
}

// Provides the formula for dividing the numbers and returns the answer.
int divide(int number1, int number2) {
	int answer;
	answer = number1 / number2;
	return answer;
}

/* Provides the formula for dividing the numbers and returns the answer.
Uses a double cast to convert it to floating point division.*/
double float_divide(int number1, int number2) {
	double answer2;
	answer2 = (double)number1 / (double)number2;
	return answer2;
}

// Provides the formula for modulus and returns the answer.
int mod(int number1, int number2) {
	int answer;
	answer = number1 % number2;
	return answer;
}

// This provides the format that the equation will output to the screen.
void show_equation(int number1, int number2, int answer, string operation) {
	cout << number1 << operation << number2 << " = " << answer << endl;
}

/* This provides the format that the floating point equation will output to the screen.
Had to make a separate one for floating point equation because of the separate int variable "answer2".*/
void show_float(int number1, int number2, double answer2, string operation) {
	cout << number1 << operation << number2 << " = " << answer2 << endl;
}

