#include "Board.h"
#include "TicTacToe.h"
#include <iostream>

using namespace std;

int main()
{
	int rows, cols, w;
	TicTacToe t;

	t.start();
	cout << " \tWelcome to \"TicTacToe\" \n" << endl;
	cout << " Players will be assigned two (2) keys.\n Please select your move accordingly. \n";
	
	for (int i = 0; i < 9; i++)
	{
		cout << "\n Player 1: X \t Player 2: O" << endl;
		w = 10;

		if (i % 2 == 0)
		{
			t.print();
			do
			{
				cout << "\n Player 1 turn! " << endl;
				cout << " Select rows: ";
				cin >> rows;
				cout << " Selecet columns: ";
				cin >> cols;

				rows--; 
				cols--;
				if (t.checkError(rows, cols))
				{
					cout << "\n Error! You need to choose again." << endl;
				}
			} while (t.checkError(rows, cols));

			t.input(rows, cols, 'X');
		}
		else
		{
			t.print();
			do
			{
				cout << "\n Player 2 turn! " << endl;
				cout << " Select rows: ";
				cin >> rows;
				cout << " Selecet columns: ";
				cin >> cols;

				rows--;
				cols--;
				if (t.checkError(rows, cols))
				{
					cout << "\n Error! You need to choose again." << endl;
				}
			} while (t.checkError(rows, cols));

			t.input(rows, cols, 'O');
		}
		t.print();
		w = t.win();

		if (w == 1)
		{
			cout << "\n\n ------------------------------" << endl;
			cout << "\n Congratulations! Player 1 wins \n" << endl;
			break;
		}
		else if (w == 2)
		{
			cout << "\n\n ------------------------------" << endl;
			cout << "\n Congratulations! Player 2 wins \n" << endl;
			break;
		}
		else if (i == 8 && w == 0)
		{
			cout << "\n\n ---------------" << endl;
			cout << "\n It's a draw! :( \n" << endl;
		}

		system("pause");
		system("cls");
	}

	return 0;
}