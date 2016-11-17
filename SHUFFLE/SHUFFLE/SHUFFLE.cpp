// shuffle1.cpp : Defines the entry point for the console application.
/*	Name:		Ger Dobbs
Student ID:		C00196843
Date:			November 2016
Purpose:		Write an application called SHUFFLE.CPP that will search a string  for a single ‘*’
				character which may or may not be present. If the asterisk is present the string will
				be copied to another string in such a way that all that came after the ‘*’ will now come first,
				followed by the ‘*’, followed by all that originally came before the ‘*’.
				In other words, the two parts of the string separated by ‘*’ will be swapped.
				If there is no asterisk present, then the string will be copied as it is, that is,
				with no shuffling taking place.
				If there is more than one asterisk present, shuffling will take place about the first occurrence.

*/

#include <iostream>

int findStar(char array[]) {
	int count = 0;
	while (array[count] != '*' && array[count] != '\0') {
		count++;
	}
	if (array[count] == '\0') {
		return -1;
	}
	return count;
}

void shuffleStar(char *array, int star, int size)
{
	int newIndex = 0;
	char *newArray = new char[size];
	for (int index = 0; index<size; index++)
	{
		if (index < star)//array up to star
		{
			newIndex = index + (size - star);
		}
		else if (index > star)//array after star
		{
			newIndex = index - (star + 1);
		}
		else
			newIndex = size - (star + 1);
		newArray[newIndex] = array[index];
	}
	std::cout << "Unshuffled:\t" << array << "\n";
	std::cout << "Shuffled:\t";
	for (int i = 0; i < size; i++)
	{
		std::cout << newArray[i];
	}
	delete[] newArray;
	std::cout << "\n";
}
int main() {
	char array[] = { "ch*aracte*r" };
	int star = -1;
	int sizeOf = sizeof(array);
	star = findStar(array);
	shuffleStar(array, star, sizeOf);
	system("pause");
	return 0;
}

