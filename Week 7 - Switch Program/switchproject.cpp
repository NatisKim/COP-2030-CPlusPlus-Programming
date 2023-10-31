// switchproject.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

/// <summary>
/// This is a calculator program with arithmetic operations. It demonstrates functions, subroutines, switch statements, and error checking.
/// The purpose is to use a switch statement to determine which operation subroutine needs to be performed, execute that function, and then output the result for that single operator.
/// </summary>
/// <returns></returns>

int main()
{
	// Stating variable declarations
	int number1, number2, answer, operation;
	double answer2;

	// Function prototypes
	int enter_operation(string, string, string, string, string, string, string);
	int enter_int(string instruction);
	void singleblankline();
	void printblanklines();
	int add(int, int);
	int subtract(int, int);
	int multiply(int, int);
	int divide(int, int);
	double float_divide(int, int);
	int mod(int, int);
	void show_equation(int, int, int, string);
	void show_float(int, int, double, string);

	/*Main Code
	The user is first asked to choose which operation they would like to perform.*/
	operation = enter_operation("Choose which operation you would like!", "Enter 1 for addition.", "Enter 2 for subtraction.", "Enter 3 for multiplication.", "Enter 4 for division.", "Enter 5 for float division.", "Enter 6 for modulus.");
	singleblankline(); // Outputs a single blank line.
	number1 = enter_int("Please enter a value for the first number."); // Asks the user to enter two numbers for the arithmetic operation of their choice.
	number2 = enter_int("Please enter a value for the second number.");
	singleblankline();
	// The following switch statement determines which operation subroutine the user chose to perform and then outputs the result.
	switch (operation) {
	case 1:
		cout << "You chose addition!" << endl;
		answer = add(number1, number2); // Addition
		show_equation(number1, number2, answer, " + ");
		break;
	case 2:
		cout << "You chose subtraction!" << endl;
		answer = subtract(number1, number2); // Subtraction
		show_equation(number1, number2, answer, " - ");
		break;
	case 3:
		cout << "You chose multiplication!" << endl;
		answer = multiply(number1, number2); // Multiplication
		show_equation(number1, number2, answer, " * ");
		break;
	case 4:
		cout << "You chose division!" << endl;
		if (number2 == 0) {
			cout << "Sorry, zero is not a valid number for this operation."; // Provides error checking. Division operation will not work if zero is the second number.
		}
		answer = divide(number1, number2); // Division
		show_equation(number1, number2, answer, " / ");
		break;

	case 5:
		cout << "You chose floating point division!" << endl;
		if (number2 == 0) {
			cout << "Sorry, zero is not a valid number for this operation."; // Provides error checking. Floating point division operation will not work if zero is the second number.
		}
		answer2 = float_divide(number1, number2); // Floating point division
		show_float(number1, number2, answer2, " / ");
		break;
	case 6:
		cout << "You chose modulus!" << endl;
		if (number2 == 0) {
			cout << "Sorry, zero is not a valid number for this operation."; // Provides error checking. Modulus operation will not work if zero is the second number.	
		}
		answer = mod(number1, number2); // Modulus
		show_equation(number1, number2, answer, " % ");
		break;
	default:
		cout << "That operation/operator does not exist." << endl; // Provides error checking when the user does not choose a valid operation.

	}
	printblanklines(); // Prints two blank lines at the end of the program.
	return 0;
}

// Subroutines

// Asks the user to choose which operation they wish to perform from a menu of choices.
int enter_operation(string choose, string add, string sub, string mult, string div, string fl_div, string mod) {
	int operation;
	cout << choose << " " << endl;
	cout << add << " " << endl;
	cout << sub << " " << endl;
	cout << mult << " " << endl;
	cout << div << " " << endl;
	cout << fl_div << " " << endl;
	cout << mod << " " << endl;
	cin >> operation;
	return operation;
}
/* Provides the user with an instruction that prompts the user to enter a number.
Then inputs and returns the number that the user selects.*/
int enter_int(string instruction) {
	int number;
	cout << instruction << " ";
	cin >> number;
	return number;
}
//Prints a single blank line.
void singleblankline() {
	cout << endl;
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

