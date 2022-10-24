//==========================
/* Method Definitions */
//==========================

#include <iostream>
#include "tictactoe.h"

/************************************************************************************* 
	Constructor: Initializes attribute to be manipulated during the program. 
				 In this case, the current user that will make the play in the game.
*/
Tictactoe::Tictactoe(char _player)
{
	player = _player;
}

///////////////////////////////////////////
// Builds what will be displayed on screen.
void Tictactoe::interFace()
{

	cout << "\t|\t|\t\n"; ////
	cout << "    " << slot[0][0] << "   " << "|" << "   " << slot[0][1] << "   " << "|" << "   " << slot[0][2] << "   \n"; // Vertical lines.
	cout << "\t|\t|\t\n"; ////
	for (int x = 0; x < 24; x++) // Horizontal lines.
		cout << "-";
	cout << endl;
	cout << "\t|\t|\t\n"; ////
	cout << "    " << slot[1][0] << "   " << "|" << "   " << slot[1][1] << "   " << "|" << "   " << slot[1][2] << "   \n"; //
	cout << "\t|\t|\t\n"; ////
	for (int x = 0; x < 24; x++) //
		cout << "-";
	cout << endl;
	cout << "\t|\t|\t\n"; ////
	cout << "    " << slot[2][0] << "   " << "|" << "   " << slot[2][1] << "   " << "|" << "   " << slot[2][2] << "   \n"; //
	cout << "\t|\t|\t\n"; ////
	cout << "\nCurrent player: " << player;
}

////////////////////////////////////////////
// Player-input updates the requested slot.
void Tictactoe::setPlayerInput(int play)
{
	switch (play)
	{
		case 1:
			slot[0][0] = player;
			break;
		case 2:
			slot[0][1] = player;
			break;
		case 3:
			slot[0][2] = player;
			break;
		case 4:
			slot[1][0] = player;
			break;
		case 5:
			slot[1][1] = player;
			break;
		case 6:
			slot[1][2] = player;
			break;
		case 7:
			slot[2][0] = player;
			break;
		case 8:
			slot[2][1] = player;
			break;
		case 9:
			slot[2][2] = player;
			break;
	}
}

////////////////////////////////////////////////////////////////
// Switches between 'X' and 'O' to toggle between both players.
void Tictactoe::togglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

////////////////////////////////////////////////////
// Game is over if there is a match of 'X' or 'O'.
bool Tictactoe::gameOver()
{
	// 3 horizontal 'X's or 'O's 
	if (slot[0][0] == 'X' && slot[0][1] == 'X' && slot[0][2] == 'X'
			|| slot[1][0] == 'X' && slot[1][1] == 'X' && slot[1][2] == 'X'
			|| slot[2][0] == 'X' && slot[2][1] == 'X' && slot[2][2] == 'X')
		return true;
	else if (slot[0][0] == 'O' && slot[0][1] == 'O' && slot[0][2] == 'O'
			|| slot[1][0] == 'O' && slot[1][1] == 'O' && slot[1][2] == 'O'
			|| slot[2][0] == 'O' && slot[2][1] == 'O' && slot[2][2] == 'O')
		return true;
	
	// 3 vertical 'X's or 'O's 
	else if (slot[0][0] == 'X' && slot[1][0] == 'X' && slot[2][0] == 'X'
			|| slot[0][1] == 'X' && slot[1][1] == 'X' && slot[2][1] == 'X'
			|| slot[0][2] == 'X' && slot[1][2] == 'X' && slot[2][2] == 'X')
		return true;
	else if (slot[0][0] == 'O' && slot[1][0] == 'O' && slot[2][0] == 'O'
			|| slot[0][1] == 'O' && slot[1][1] == 'O' && slot[2][1] == 'O'
			|| slot[0][2] == 'O' && slot[1][2] == 'O' && slot[2][2] == 'O')
		return true;

	// 3 diagonal 'X's or 'O's 
	else if (slot[0][0] == 'O' && slot[1][1] == 'O' && slot[2][2] == 'O'
			|| slot[2][0] == 'O' && slot[1][1] == 'O' && slot[0][2] == 'O')
		return true;
	else if (slot[0][0] == 'X' && slot[1][1] == 'X' && slot[2][2] == 'X'
			|| slot[2][0] == 'X' && slot[1][1] == 'X' && slot[0][2] == 'X')
		return true;
	else
		return false;
}

//////////////////////
// Getter method.
char Tictactoe::getPlayer()
{
	return player;
}