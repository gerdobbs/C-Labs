// Exercise3.cpp : Defines the entry point for the console application.
/*
* Name:			Gerard Dobbs
* Date:			November 2016
* Student No.:	C00196843
* Project:		Write a function to print out all occurrences of pairs
				of any 2 number in an array of integers whose product 
				(numbers multiplied together)  is equal to a given Number
				printPairs(int product,int arr[],int arrSize)
				write the appropriate code that fully tests the function you write. 
*
* */


#include <cstdlib>
#include <cstdio>
#include <iostream>

void printPairs( int product, int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		for (int j = i + 1; j < arrSize; j++)
		{
			if (arr[i] * arr[j] == product)
			{
				std::cout << arr[i] << " * " << arr[j] << std::endl;
			}
		}
	}
}
int main()
{
	int intArr[] = { 1,6,78,9,12,89,5,6,3,4,34,76,7,34,21,43,8,2,56,8 };
	printPairs(12, intArr, 20);
	system("pause");
	return 0;
}