// This program will get an array of integers and add them up displaying the integers and sums.
// Austen Hernandez
// 4/7/26

#include <iostream>
#include <iomanip>

using namespace std;

const int rowSize = 5;

// Function Prototypes here
void fillArray(int[][6], int);
void printArray(int[][6], int);
void printTotals(int[][6], int);

// Main will call a function for filling arrays, printing arrays, and printing totals.
int main()
{
	cout << "Welcome to my macro tuff exite program" << endl;
	int numbers[5][6];
	fillArray(numbers, rowSize);
	cout << "Display array: " << endl;
	printArray(numbers, rowSize);
	printTotals(numbers, rowSize);
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

// Print array will print and format the contents of the array
void printArray(int print[][6], int rSize)
{
	cout << right;
	for (int r = 0; r < rSize; r++)
	{
		for (int c = 0; c < 6; c++)
		{
			cout << setw(5) << print[r][c];
		}
		cout << endl;
	}
	for (int l = 0; l < 30; l++)
		cout << "-";
	cout << endl;
}

// Print totals will print the sum of each column of the array.
void printTotals(int totals[][6], int rSize)
{
	int total;
	for (int c = 0; c < 6; c++)
	{
		total = 0;
		for (int r = 0; r < rSize; r++)
			total += totals[r][c];
		cout << setw(5) << total;
	}
}