// Exercise2.cpp : Defines the entry point for the console application.
/*
* Name:			Gerard Dobbs
* Date:			November 2016
* Student No.:	C00196843
* Project:		Write a program that contains an array of 20 integer values.
				The program will find and display the index of the first occurrence
				and the last occurrence of the number 12. Your program should print
				the value -1  if the number 12 is not found. The index is array offset for the item.
				For example if the 8th data item is the only 12, the index value 7 should be displayed for the first and last occurrence.
				The program must contain only one loop and mist not use <string>.
				Use pointer arithmetic to access the values in the the array and to loop through the array .

*
* */


#include <cstdio>
#include <iostream>

void getOccurences(int *p)
{
	int firstOcc = -1, secondOcc = -1, count = 0;
	for(int i=0;i<20;i++)
	{
		//std::cout << intArr[i]<<std::endl;
		if (*p == 12 && count == 0)
		{
			firstOcc = i;
			secondOcc = i;
			count++;
		}
		else if (*p == 12 && count != 0)
		{
			secondOcc = i;
		}
		p++;
	}
	if (firstOcc == -1)
	{
		std::cout << "First Occurrence of 12:\t" << firstOcc << std::endl;
	}
	else
	{
		std::cout << "First Occurrence of 12:  " << firstOcc << "\n" << "Second Occurrence of 12:  " << secondOcc << std::endl;
	}

}
int main()
{
	int intArr[] = { 1,6,78,9,12,89,5,6,3,12,34,76,7,34,21,43,8,12,56,8 };
	getOccurences(intArr);
	system("pause");
	return 0;
}

