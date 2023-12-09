#pragma once
#include "Board.h"
#include <iostream>
using namespace std;

struct TicTacToe
{
	Board b;

	void start();
	void input(int, int, char);
	void print();
	bool checkError(int, int);
	int win();
};