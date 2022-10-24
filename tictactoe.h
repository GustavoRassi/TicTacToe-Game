//======================================
/* Class Header/Method Declarations */
//======================================
using namespace std;

class Tictactoe
{
	public:
		Tictactoe(char);
		void interFace();
		void setPlayerInput(int);
		void togglePlayer();
		bool gameOver();
		char getPlayer();
	private:
		char player;
		char slot[3][3] = {'1', '2', '3', 
						   '4', '5', '6', 
						   '7', '8', '9'};
};