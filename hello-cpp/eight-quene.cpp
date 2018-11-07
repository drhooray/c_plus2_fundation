#include <iostream>

using namespace std;

const int NUM_OF_QUEENS = 8;
int queens[NUM_OF_QUEENS];

bool isValid(int row, int column)
{
	for (int i= 1; i<= row; i++)
	{
		if (queens[row - i] == column ||
			queens[row - i] == column - i ||
			queens[row - i] == column + i )
			return false;
	}
	return true;
}

void printResult()
{
	cout << "\n-----------------------------------\n";
	for (int row = 0; row < NUM_OF_QUEENS ; row ++)
	{
		for (int column = 0; column < NUM_OF_QUEENS; column ++)
			printf(column == queens[row] ? "| Q ": "|   ");
		cout <<"|\n-----------------------------------\n";
	}
}

bool search(int row)
{
	if (row == NUM_OF_QUEENS)
		return true;
	for (int column = 0; column < NUM_OF_QUEENS; column ++)
	{
		queens[row]=column;
		if (isValid(row, column) && search(row + 1))
			return true;
	}

	return false;
}

int main()
{
	search(0);
	printResult();
	return 0;
}

