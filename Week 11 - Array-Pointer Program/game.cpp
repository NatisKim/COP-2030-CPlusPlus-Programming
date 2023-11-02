// game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/// <summary>
/// The purpose of this assignment is to apply knowledge of selection, iteration statements, error checking, and 2-D arrays for this Tic-Tac-Toe game.
/// </summary>
/// <returns></returns>

const int board_size = 3; // Initializing constant size of 2-D Array
int main()
{
	// Declaring variables
	char square[board_size][board_size] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; // Two-Dimensional 3x3 Array
	char playerX = 'X';
	char playerO = 'O';
	char response;
	int move;
	int turn;
	int win;
	// Declaring function prototypes
	void tic_tac_toe(char square[][board_size]);
	void printblanklines();
	int choosesquare(string ask);
	int checkwin(char square[][board_size]);
	char getresponse(string);
	void playerround(char, char);

	//Main code
	do { // Demonstrating iteration of the game code.
		tic_tac_toe(square);
		printblanklines();
		playerround(playerX, playerO);
		response = getresponse("Would you like to continue the game? Please enter (y/n)."); // Prompts the user to enter a yes to continue the game or a no to end the game.

	} while (response == 'Y' || response == 'y'); // Repeats the game if the user enters y for yes.
	return 0;
}

/* The following are subroutines.
This board provides the format for the string variable square1 - square9 in the appropriate squares.
It outputs the string X onto the appropriate square after player one (playerX) makes their move.
If it is player O, it outputs the string O onto the appropriate square after player two (playerO) makes their move.*/
void tic_tac_toe(char square[][board_size]) {

	cout << "         |         |         " << endl;
	cout << "    " << square[0][0] << "    |    " << "" << square[0][1] << "    |   " << " " << square[0][2] << endl;
	cout << "         |         |         " << endl;
	cout << "---------+---------+---------" << endl;
	cout << "         |         |         " << endl;
	cout << "    " << square[1][0] << "    |    " << "" << square[1][1] << "    |   " << " " << square[1][2] << endl;
	cout << "         |         |         " << endl;
	cout << "---------+---------+---------" << endl;
	cout << "         |         |         " << endl;
	cout << "    " << square[2][0] << "    |    " << "" << square[2][1] << "    |   " << " " << square[2][2] << endl;
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
// Purpose is to declare winning conditions for either Player 1 (playerX) or Player 2 (playerO). 
int checkwin(char square[][board_size]) {
	if ((square[0][0] == 'X' && square[0][1] == 'X' && square[0][2] == 'X') ||
		(square[1][0] == 'X' && square[1][1] == 'X' && square[1][2] == 'X') ||
		(square[2][0] == 'X' && square[2][1] == 'X' && square[2][2] == 'X') ||
		(square[0][0] == 'X' && square[1][0] == 'X' && square[2][0] == 'X') ||
		(square[0][1] == 'X' && square[1][1] == 'X' && square[2][1] == 'X') ||
		(square[0][2] == 'X' && square[1][2] == 'X' && square[2][2] == 'X') ||
		(square[0][0] == 'X' && square[1][1] == 'X' && square[2][2] == 'X') ||
		(square[0][2] == 'X' && square[1][1] == 'X' && square[2][0] == 'X')) {
		cout << "Game over. Player 1 wins!" << endl;
		return 1;
	}
	else if ((square[0][0] == 'O' && square[0][1] == 'O' && square[0][2] == 'O') ||
		(square[1][0] == 'O' && square[1][1] == 'O' && square[1][2] == 'O') ||
		(square[2][0] == 'O' && square[2][1] == 'O' && square[2][2] == 'O') ||
		(square[0][0] == 'O' && square[1][0] == 'O' && square[2][0] == 'O') ||
		(square[0][1] == 'O' && square[1][1] == 'O' && square[2][1] == 'O') ||
		(square[0][2] == 'O' && square[1][2] == 'O' && square[2][2] == 'O') ||
		(square[0][0] == 'O' && square[1][1] == 'O' && square[2][2] == 'O') ||
		(square[0][2] == 'O' && square[1][1] == 'O' && square[2][0] == 'O')) {
		cout << "Game over. Player 2 wins!" << endl;
		return 1;
	}

	return 0;
}
/* Purpose is to demonstrate iteration of game round between Player 1 (playerX) and Player 2 (playerO).
Each player takes a turn to make their move and shows either a game win or a game draw.*/
void playerround(char playerX, char playerO) {
	char square[board_size][board_size] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int move;
	int turn;
	int win;
	turn = 1;
	// Demonstrating iteration of player round
	do {
		if (turn % 2 == 1) { // If the iteration turn is an odd number, then it is Player 1's (X) turn to play.
			turn++;
			move = choosesquare("Player 1, please select a square:");
			if (move == 1 && square[0][0] == '1') {
				square[0][0] = playerX;
			}
			else if (move == 2 && square[0][1] == '2') {
				square[0][1] = playerX;
			}
			else if (move == 3 && square[0][2] == '3') {
				square[0][2] = playerX;
			}
			else if (move == 4 && square[1][0] == '4') {
				square[1][0] = playerX;
			}
			else if (move == 5 && square[1][1] == '5') {
				square[1][1] = playerX;
			}
			else if (move == 6 && square[1][2] == '6') {
				square[1][2] = playerX;
			}
			else if (move == 7 && square[2][0] == '7') {
				square[2][0] = playerX;
			}
			else if (move == 8 && square[2][1] == '8') {
				square[2][1] = playerX;
			}
			else if (move == 9 && square[2][2] == '9') {
				square[2][2] = playerX;
			}
			else {
				cout << "Sorry! Square already taken." << endl; // Error checking that the square was not already taken.
				move = choosesquare("Player 1, please select a square:");
				if (move == 1 && square[0][0] == '1') {
					square[0][0] = playerX;
				}
				else if (move == 2 && square[0][1] == '2') {
					square[0][1] = playerX;
				}
				else if (move == 3 && square[0][2] == '3') {
					square[0][2] = playerX;
				}
				else if (move == 4 && square[1][0] == '4') {
					square[1][0] = playerX;
				}
				else if (move == 5 && square[1][1] == '5') {
					square[1][1] = playerX;
				}
				else if (move == 6 && square[1][2] == '6') {
					square[1][2] = playerX;
				}
				else if (move == 7 && square[2][0] == '7') {
					square[2][0] = playerX;
				}
				else if (move == 8 && square[2][1] == '8') {
					square[2][1] = playerX;
				}
				else if (move == 9 && square[2][2] == '9') {
					square[2][2] = playerX;
				}
			}
			tic_tac_toe(square); // Outputs the "X" in the tic tac toe board that player one (playerX) selects.
			printblanklines();
		}
		else {
			turn++;
			move = choosesquare("Player 2, please select a square:");  // If the iteration turn is an even number, it is Player 2's (O) turn to play.
			if (move == 1 && square[0][0] == '1') {
				square[0][0] = playerO;
			}
			else if (move == 2 && square[0][1] == '2') {
				square[0][1] = playerO;
			}
			else if (move == 3 && square[0][2] == '3') {
				square[0][2] = playerO;
			}
			else if (move == 4 && square[1][0] == '4') {
				square[1][0] = playerO;
			}
			else if (move == 5 && square[1][1] == '5') {
				square[1][1] = playerO;
			}
			else if (move == 6 && square[1][2] == '6') {
				square[1][2] = playerO;
			}
			else if (move == 7 && square[2][0] == '7') {
				square[2][0] = playerO;
			}
			else if (move == 8 && square[2][1] == '8') {
				square[2][1] = playerO;
			}
			else if (move == 9 && square[2][2] == '9') {
				square[2][2] = playerO;
			}
			else {
				cout << "Sorry! Square already taken." << endl; // Demonstrates error checking. Checks that the square was not already taken by the previous player.
				move = choosesquare("Player 2, please select a square:");
				if (move == 1 && square[0][0] == '1') {
					square[0][0] = playerO;
				}
				else if (move == 2 && square[0][1] == '2') {
					square[0][1] = playerO;
				}
				else if (move == 3 && square[0][2] == '3') {
					square[0][2] = playerO;
				}
				else if (move == 4 && square[1][0] == '4') {
					square[1][0] = playerO;
				}
				else if (move == 5 && square[1][1] == '5') {
					square[1][1] = playerO;
				}
				else if (move == 6 && square[1][2] == '6') {
					square[1][2] = playerO;
				}
				else if (move == 7 && square[2][0] == '7') {
					square[2][0] = playerO;
				}
				else if (move == 8 && square[2][1] == '8') {
					square[2][1] = playerO;
				}
				else if (move == 9 && square[2][2] == '9') {
					square[2][2] = playerO;
				}

			}
			tic_tac_toe(square); // Outputs the "O" in the tic tac toe board that player two (playerO) selects.
			printblanklines();
		}
		win = checkwin(square);
	} while (turn < 10 && win == 0); // The iteration turns must be less than 10 (to fill up the 9 spaces) to complete the board. Declares if there is a game win.
	if (win == 0 && turn == 10) { // If the game is not a win and all spaces have been filled, then the game is a draw.
		cout << "Game over. It's a draw!" << endl;
	}
}
/* Purpose is to ask the user if they want to continue or end the game.
If the user enter a y or Y, the game resets and continues. If the user enters a n or N, the game ends. */
char getresponse(string ask) {
	char response;
	cout << ask << " " << endl;
	cin >> response;
	if (response == 'n' || response == 'N') { // If the user says no by entering character values 'n' or 'N', then the game ends.
		cout << "Game ended! Good job!" << endl;
	}
	while (response != 'y' && response != 'Y' && response != 'n' && response != 'N') {
		cout << "Error: that response is not valid." << endl; // Checks that the user entered a valid response and repeats until the user enters a legitimate response.
		response = getresponse("Please enter y for yes or n for no.");
	}
	return response;
}

