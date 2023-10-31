// Week_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/// <summary>
/// This is a calculator program that is demonstrating functions and subroutines.
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
	number1 = enter_int("Please enter a number.");
	number2 = enter_int("Please enter another number greater than zero.");
	printblanklines();

	answer = add(number1, number2); // Addition 
	show_equation(number1, number2, answer, " + ");

	answer = subtract(number1, number2); // Subtraction
	show_equation(number1, number2, answer, " - ");

	answer = multiply(number1, number2); // Multiplication
	show_equation(number1, number2, answer, " * ");

	answer = divide(number1, number2); // Division
	show_equation(number1, number2, answer, " / ");

	answer2 = float_divide(number1, number2); // Floating point division
	show_float(number1, number2, answer2, " / ");

	answer = mod(number1, number2); // Modulus
	show_equation(number1, number2, answer, " % ");
	printblanklines();

	return 0;
}
// Subroutines
int enter_int(string instruction) { // Provides instruction for inputting integer numbers
	int number;
	cout << instruction << " ";
	cin >> number;
	return number;
}
void printblanklines() { // Prints two blank lines
	cout << endl;
	cout << endl;
}
int add(int number1, int number2) {
	int answer;
	answer = number1 + number2;
	return answer;
}
int subtract(int number1, int number2) {
	int answer;
	answer = number1 - number2;
	return answer;
}
int multiply(int number1, int number2) {
	int answer;
	answer = number1 * number2;
	return answer;
}
int divide(int number1, int number2) {
	int answer;
	answer = number1 / number2;
	return answer;
}
double float_divide(int number1, int number2) {
	double answer2;
	answer2 = (double)number1 / (double)number2; // Casting a double variable for floating point division
	return answer2;
}
int mod(int number1, int number2) {
	int answer;
	answer = number1 % number2;
	return answer;
}
void show_equation(int number1, int number2, int answer, string operation) { // Provides output format for arithmetic operations
	cout << number1 << operation << number2 << " = " << answer << endl;
}
void show_float(int number1, int number2, double answer2, string operation) { // Provides output format for floating division
	cout << number1 << operation << number2 << " = " << answer2 << endl;
}



