// This program will get an array of integers and add them up displaying the integers and sums.
// Austen Hernandez
// 4/7/26

#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes here
void fillArray(int[][6], int);

// Main will call a function for filling arrays, printing arrays, and printing totals.
int main()
{
	int numbers[5][6];
	fillArray(numbers, 5);
	return 0;
}

// Fill array function will prompt the user to put values into the array
void fillArray(int fill[][6], int size)
{
	cout << "Fill this array with integers: " << endl;
	for (int r = 0; r < 5; r++)
	{
		for (int c = 0; c < 6; c++)
		{
			cin >> fill[r][c];
		}
	}
}
