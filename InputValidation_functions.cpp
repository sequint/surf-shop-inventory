// Function file for input validation functions only.

#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

//**************************************************************************************************************
// greaterThenZero Function (int)                                                                              *
//                                                                                                             *
// This an overloaded function takes that checks if an int variable passed in is greater than 0.               *
// If the number is greater than 0 the function returns true, else it returns false.                           *
//**************************************************************************************************************

bool greaterThanZero(int num)
{
	if (num > MIN_INT)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//**************************************************************************************************************
// greaterThenZero Function (float)                                                                            *
//                                                                                                             *
// This an overloaded function takes that checks if a float variable passed in is greater than 0.0.            *
// If the number is greater than 0.0 the function returns true, else it returns false.                         *
//**************************************************************************************************************

bool greaterThanZero(float num)
{
	if (num > MIN_FLOAT)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//**************************************************************************************************************
// isLessThan Function																						   *
//																											   *
// This function takes in a string and an integer as arguments and checks if the strings length is less than.  *
//**************************************************************************************************************

bool isLessThan(string text, int length)
{
	if (text.length() < length)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//**************************************************************************************************************
// correctFormat Function																					   *
//																											   *
// This function takes a string argument and checks if it matches the correct phone number format.             *
//**************************************************************************************************************

string correctFormat(string text)
{
	const int MAX_NUM = 11;  // Constant variable to hold one more than max characters aloud in the string. Used in case recursive functions need to be called in the else statement.
	bool isNum;              // Boolean variable to flag whether or not a character is a number.

	// Check if all characters within the string passed are numbers.
	// While the characters are not all numbers, ask the user for another input using inputText() and check the characters again.
	do
	{
		// Loop through each character of the string passed in and check if the character is a number or not.
		for (int count = 0; count < text.length(); count++)
		{
			// If the character in the string is a number set boolean flag to true and continue the for loop.
			// If the character is not a number; set the bool to false, ask the user to re-enter text using inputText function, and break the for loop.
			if (isdigit(text[count]))
			{
				isNum = true;
			}
			else
			{
				isNum = false;
				cout << "Error, phone number should include numbers only (no special characters).\n";
				cout << "Please re-enter the phone number ";
				text = inputText(MAX_NUM);
				break;
			}
		}

	} while (!isNum);

	return text;
}
