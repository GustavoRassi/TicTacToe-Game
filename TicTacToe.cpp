/*******************************************************************************************
*	Project: Basic TicTacToe Game (Personal)
*	Description: The game consists of two players in which they seek in alternate 
*				 turns to complete a row, a column, or a diagonal with either
*				 three O's or three X's placed in the spaces of a grid of nine squares.
*				 Each space will be represented as a slot with a number to indicate which
*				 slot will be played.
*	
*	Developed by: Gustavo A. Rassi
*	
*******************************************************************************************/
//=============================
/* Tester file of the game */
//=============================

#include <iostream>

// When using Microsoft Visual Studio
#include <windows.h>
/********************
When using Visual Studio Code

#include <stdio.h>
#include <unistd.h> 

*/
#include "tictac-toe.cpp"
using namespace std;

int main()
{
	Tictactoe player('X');
	
	int selection;
	bool game_over = false;

	cout << "Welcome to a game of Tic Tac Toe!\n";
	Sleep(2000);
	//sleep(2);
	// In-game description for outside users.
	cout << "\nThe game consists of two players in which they seek in alternate turns to complete a row, a column, or a diagonal\n";
	cout << "with either three O's or three X's placed in the spaces of a grid of nine squares.\n";
	cout << "Each space will be represented as a slot with a number to indicate which slot will be played.\n";
	Sleep(5000);
	//sleep(2);
	cout << endl;
	cout << "Please any key when you're ready.\n";
	getchar();
	

	while (!game_over)
	{
		system("cls");
		player.interFace();
		cout << "\n\nSelect slot: ";
		cin >> selection;
		player.setPlayerInput(selection);
		if (!player.gameOver())
			player.togglePlayer();
		else
			game_over = true;
	}
	system("cls");
	player.interFace();
	cout << "\nGame Over.\nWinner is player " << player.getPlayer() << "!";
	cout << endl;

	return 0;
}