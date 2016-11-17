// Exercise4.cpp : Defines the entry point for the console application.
//

/*	Name:		Ger Dobbs
Student ID:		C00196843
Date:			November 2016
Purpose:		Write a program which will input a string from the keyboard, 
				and output the number of separate words, where a word is one 
				or more characters separated by spaces. Your program should 
				only count as words groups of characters in the ranges A..Z and a..z.
				For example the characters “      dd  3  f4  fff  ff2 dd      ”
				would return a word count of 3.

*/
#include <iostream>

bool isLetter(char c)
{
	if ((c >= 'a'&&c <= 'z')|| (c >= 'A'&&c <= 'Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void checkWords()
{
	char sentence[100];
	char input;
	int count = 0;

	std::cout << "Enter a Sentence\t";
	input = getchar();
	while (input != '\n')
	{
		sentence[count] = input;
		input = getchar();
		count++;
	}
	sentence[count] = ' ';
	bool isWord = true;
	int wordCount = 0;
	int index = 0;
	while (index <= count)
	{
		isWord = true;
		if (sentence[index] == ' ')
		{
			isWord = false;
		}
		while (sentence[index] != ' '&& sentence[index] != '\0')
		{
			if (!isLetter(sentence[index]))
			{
				isWord = false;
			}
			index++;
		}
		if (isWord)
		{
			wordCount++;
		}
		index++;
	}
	if (wordCount == 1)
	{
		std::cout << "There is " << wordCount << " proper word.\n";
	}
	else
	{
		std::cout << "There are " << wordCount << " proper words.\n";
	}
}

int main()
{
	checkWords();
	system("pause");
	return 0;
}

