// calculatoriterate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

/// <summary>
/// This is a calculator program with arithmetic operations. It demonstrates functions, subroutines, switch statements, error checking, and iteration.
/// </summary>
/// <returns></returns>

int main()
{
	// Stating variable declarations
	int number1, number2, answer;
	char operation, response;
	double answer2;

	// Function prototypes
	char enter_operation(string, string, string, string, string, string, string, string);
	int enter_int(string instruction);
	void singleblankline();
	void printblanklines();
	int add(int, int);
	int subtract(int, int);
	int multiply(int, int);
	int divide(int, int);
	double float_divide(int, int);
	int mod(int, int);
	int expon(int, int);
	void show_equation(int, int, int, string);
	void show_float(int, int, double, string);
	char getyorn(string ask);

	/*Main Code
	The user is first asked to choose which operation they would like to perform.*/
	do { // Performing iteration
		operation = enter_operation("Choose which operation you would like!", "Enter + for addition.", "Enter - for subtraction.", "Enter * for multiplication.", "Enter / for division.", "Enter f for float division.", "Enter % for modulus.", "Enter ^ for exponent.");
		singleblankline(); // Prints single blank line.
		number1 = enter_int("Please enter a value for the first number."); // Asks the user to enter two numbers for the arithmetic operation of their choice.
		number2 = enter_int("Please enter a value for the second number.");
		singleblankline();
		// The following switch statement determines which operation subroutine the user chose to perform and then outputs the result.
		switch (operation) {
		case '+': // Addition
			cout << "You chose addition!" << endl;
			answer = add(number1, number2);
			show_equation(number1, number2, answer, " + ");
			break;
		case '-': // Subtraction
			cout << "You chose subtraction!" << endl;
			answer = subtract(number1, number2);
			show_equation(number1, number2, answer, " - ");
			break;
		case '*': // Multiplication
			cout << "You chose multiplication!" << endl;
			answer = multiply(number1, number2);
			show_equation(number1, number2, answer, " * ");
			break;
		case '/': // Division
			cout << "You chose division!" << endl;
			if (number2 == 0) {
				cout << "Sorry, zero is not a valid number for this operation.";// Provides error checking. Division operation will not work if zero is the second number.
				while (number2 == 0) {
					number2 = enter_int(" Please enter a value for the second number.");
					answer = divide(number1, number2);
					show_equation(number1, number2, answer, " / ");
				}
			}
			else {
				answer = divide(number1, number2);
				show_equation(number1, number2, answer, " / ");
			}

			break;
		case 'f':  // Floating point division
			cout << "You chose floating point division!" << endl;
			if (number2 == 0) {
				cout << "Sorry, zero is not a valid number for this operation."; // Provides error checking. Floating point division operation will not work if zero is the second number.
				while (number2 == 0) {
					number2 = enter_int(" Please enter a value for the second number.");
					answer2 = float_divide(number1, number2);
					show_float(number1, number2, answer2, " / ");
				}
			}
			else {
				answer2 = float_divide(number1, number2);
				show_float(number1, number2, answer2, " / ");
			}
			break;

		case '%': // Modulus
			cout << "You chose modulus!" << endl;
			if (number2 <= 1) {
				cout << "Sorry, that is not a valid number for this operation."; // Provides error checking.
				while (number2 <= 1) {
					number2 = enter_int(" Please enter a value for the second number.");
					answer = mod(number1, number2);
					show_equation(number1, number2, answer, " % ");
				}
			}
			else {
				answer = mod(number1, number2);
				show_equation(number1, number2, answer, " % ");
			}
			break;
		case '^': // Exponent
			cout << "You chose an exponent operation!" << endl;
			answer = expon(number1, number2);
			show_equation(number1, number2, answer, "^");
			break;

		default:
			cout << "That operation/operator does not exist." << endl; // Provides error checking when the user does not choose a valid operation.

		}
		response = getyorn("Would you like to choose another operation? Please enter y to continue or n to end it.");
		printblanklines(); // Prints two blank lines at the end of the program.
	} while (response == 'y' || response == 'Y');


	return 0;
}
// Subroutines

// Asks the user to choose which operation they wish to perform from a menu of choices.
char enter_operation(string choose, string add, string sub, string mult, string div, string fl_div, string mod, string exp) {
	char operation;
	cout << choose << " " << endl;
	cout << add << " " << endl;
	cout << sub << " " << endl;
	cout << mult << " " << endl;
	cout << div << " " << endl;
	cout << fl_div << " " << endl;
	cout << mod << " " << endl;
	cout << exp << " " << endl;
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
// Provides an iteration loop to demonstrate an exponent formula, and returns the answer.
int expon(int number1, int number2) {
	int answer = 1;
	for (int i = 0; i < number2; i++) {
		answer = answer * number1;
	}
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
//Asks the user if they want to choose another operation
char getyorn(string ask) {
	char response;
	cout << ask << " " << endl;
	cin >> response;
	while (response != 'y' && response != 'Y' && response != 'n' && response != 'N') {
		cout << "Sorry! That is not a valid response. Try again." << endl; // Error checks that the user entered a legitimate response and repeats the question
		response = getyorn("Please enter y to continue or n to end it.");
	}
	return response;
}


