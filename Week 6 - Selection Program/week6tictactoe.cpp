// boards.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;
/// <summary>
/// The purpose of this assignment is to apply knowledge of selection statements and error checking for this Tic-Tac-Toe game.
/// </summary>
/// <returns></returns>

int main()
{
	// Declaring variables
	string square1 = " "; string square2 = " "; string square3 = " "; string square4 = " ";
	string square5 = " "; string square6 = " "; string square7 = " "; string square8 = " "; string square9 = " ";
	string playerX = "X";
	string playerO = "O";
	int move;

	// Declaring function prototypes
	void emptyBoard();
	void tic_tac_toe(string, string, string, string, string, string, string, string, string, string);
	void printblanklines();
	int choosesquare(string ask);

	//Main code
	emptyBoard();
	printblanklines();

	/*Round one, player one.
	The following selection statement applies the move that player one (playerX) makes to the appropriate square space.
	Then, the square space is replaced with the string "X" that is associated with playerX.*/
	move = choosesquare("Player 1, please select a square:");
	if (move == 1 && square1 == " ") {
		square1 = playerX;
	}
	else if (move == 2 && square2 == " ") {
		square2 = playerX;
	}
	else if (move == 3 && square3 == " ") {
		square3 = playerX;
	}
	else if (move == 4 && square4 == " ") {
		square4 = playerX;
	}
	else if (move == 5 && square5 == " ") {
		square5 = playerX;
	}
	else if (move == 6 && square6 == " ") {
		square6 = playerX;
	}
	else if (move == 7 && square7 == " ") {
		square7 = playerX;
	}
	else if (move == 8 && square8 == " ") {
		square8 = playerX;
	}
	else if (move == 9 && square9 == " ") {
		square9 = playerX;
	}
	tic_tac_toe(square1, square2, square3, square4, square5, square6, square7, square8, square9, playerX); // Outputs the "X" in the tic tac toe board that player one (playerX) selects.
	printblanklines();

	/*Round one, player two.
	The following selection statement applies the move that player two (playerO) makes to the appropriate square space.
	Then, the square space is replaced with the string "O" that is associated with playerO.*/
	move = choosesquare("Player 2, please select a square:");
	if (move == 1 && square1 == " ") {
		square1 = playerO;
	}
	else if (move == 2 && square2 == " ") {
		square2 = playerO;
	}
	else if (move == 3 && square3 == " ") {
		square3 = playerO;
	}
	else if (move == 4 && square4 == " ") {
		square4 = playerO;
	}
	else if (move == 5 && square5 == " ") {
		square5 = playerO;
	}
	else if (move == 6 && square6 == " ") {
		square6 = playerO;
	}
	else if (move == 7 && square7 == " ") {
		square7 = playerO;
	}
	else if (move == 8 && square8 == " ") {
		square8 = playerO;
	}
	else if (move == 9 && square9 == " ") {
		square9 = playerO;
	}
	else {
		cout << "Sorry! Square already taken." << endl; // Demonstrates error checking. Checks that the square was not already taken by the previous player.
		move = choosesquare("Player 2, please select a square:");

		if (move == 1 && square1 == " ") {
			square1 = playerO;
		}
		else if (move == 2 && square2 == " ") {
			square2 = playerO;
		}
		else if (move == 3 && square3 == " ") {
			square3 = playerO;
		}
		else if (move == 4 && square4 == " ") {
			square4 = playerO;
		}
		else if (move == 5 && square5 == " ") {
			square5 = playerO;
		}
		else if (move == 6 && square6 == " ") {
			square6 = playerO;
		}
		else if (move == 7 && square7 == " ") {
			square7 = playerO;
		}
		else if (move == 8 && square8 == " ") {
			square8 = playerO;
		}
		else if (move == 9 && square9 == " ") {
			square9 = playerO;
		}
	}
	tic_tac_toe(square1, square2, square3, square4, square5, square6, square7, square8, square9, playerO);  // Outputs the "O" in the tic tac toe board that player two (playerO) selects.
	printblanklines();

	return 0;
}

/* The following are subroutines.
The first one shows numbers placed in the squares.*/
void emptyBoard() {

	cout << "         |         |         " << endl;
	cout << "    " << "1" << "    |    " << "" << "2" << "    |   " << " " << "3" << endl;
	cout << "         |         |         " << endl;
	cout << "---------+---------+---------" << endl;
	cout << "         |         |         " << endl;
	cout << "    " << "4" << "    |    " << "" << "5" << "    |   " << " " << "6" << endl;
	cout << "         |         |         " << endl;
	cout << "---------+---------+---------" << endl;
	cout << "         |         |         " << endl;
	cout << "    " << "7" << "    |    " << "" << "8" << "    |   " << " " << "9" << endl;
	cout << "         |         |         " << endl << endl;

}
/*This board provides the format for the string variable square1 - square9 in the appropriate squares.
It outputs the string X onto the appropriate square after player one (playerX) makes their move.
If it is player O, it outputs the string O onto the appropriate square after player two (playerO) makes their move.*/
void tic_tac_toe(string square1, string square2, string square3, string square4, string square5, string square6, string square7, string square8, string square9, string player) {

	cout << "         |         |         " << endl;
	cout << "    " << square1 << "    |    " << "" << square2 << "    |   " << " " << square3 << endl;
	cout << "         |         |         " << endl;
	cout << "---------+---------+---------" << endl;
	cout << "         |         |         " << endl;
	cout << "    " << square4 << "    |    " << "" << square5 << "    |   " << " " << square6 << endl;
	cout << "         |         |         " << endl;
	cout << "---------+---------+---------" << endl;
	cout << "         |         |         " << endl;
	cout << "    " << square7 << "    |    " << "" << square8 << "    |   " << " " << square9 << endl;
	cout << "         |         |         " << endl << endl;

}

//Purpose is to print two blank lines.
void printblanklines() {
	cout << endl << endl;

}

int choosesquare(string ask) {
	int move;
	//Asks the player to choose the square they want and then inputs the move that the player makes.
	cout << ask << " ";
	cin >> move;
	cin.clear(); // This is added to avoid error messages on loop. 

	// This demonstrates error checking and makes sure that the player doesn't select an invalid move.
	if (move >= 1 && move <= 9) {
		cout << "Valid range." << endl; // Outputs that the move is in the valid range.
	}
	else {
		cout << "Sorry! That square does not exist." << endl; // If move is invalid, it outputs this message.
		cin.clear();
		move = choosesquare("Try again!"); // Prompts the user to enter another square after entering an invalid move.
	}

	return move;
}
