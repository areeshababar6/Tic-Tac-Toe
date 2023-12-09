#include "Board.h"
#include <iostream>
using namespace std;


void Board::Initialize()
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			arr[i][j] = ' ';
}
void Board::setArray(int r, int c, char n)
{
	arr[r][c] = n;
}
void Board::display()
{
	for (int i = 0; i < 3; i++)
	{
		cout << " \t ";
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j];
			if (j != 2)
				cout << " | ";
		}
		cout << endl;
		if (i != 2)
			cout << "\t-----------" << endl;
	}
}