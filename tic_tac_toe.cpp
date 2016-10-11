#include <iostream>

using namespace std;

char game_matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';

void draw_game_matrix()
{
	system("cls");
	cout << "Tic Tac Toe Game" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << game_matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void player_move_input()
{
	int move_index;
	cout << "Press the number of the field: ";
	cin >> move_index;

	if (move_index == 1)
		matrix[0][0] = player;
	else if (move_index == 2)
		matrix[0][1] = player;
	else if (move_index == 3)
		matrix[0][2] = player;
	else if (move_index == 4)
		matrix[1][0] = player;
	else if (move_index == 5)
		matrix[1][1] = player;
	else if (move_index == 6)
		matrix[1][2] = player;
	else if (move_index == 7)
		matrix[2][0] = player;
	else if (move_index == 8)
		matrix[2][1] = player;
	else if (move_index == 9)
		matrix[2][2] = player;
}

void toggle_player()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}

char winner()
{
	// first player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	// second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}

int main()
{
	draw_game_matrix();
	while (1)
	{
		player_move_input();
		draw_game_matrix();
		if (winner() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (winner() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		toggle_player();
	}
	system("pause");
	return 0;
}
