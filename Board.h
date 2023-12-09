#pragma once

struct Board
{
	char arr[3][3];

	void Initialize();
	void setArray(int, int, char);
	void display();
};