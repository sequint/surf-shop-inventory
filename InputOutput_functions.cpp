// Function file for input validation functions only.

#include <iostream>
#include <string>
#include <iomanip>
#include "functions.h"
#include "Inventory.h"
using namespace std;

//**************************************************************************************************************
//                                                INPUT FUNCTIONS                                              *
//**************************************************************************************************************

//**************************************************************************************************************
// inputInventoryObjects Function																			   *
//																											   *
// This functions loops through an array of 5 Inventory objects and prompts the user to enter data             *
// for each member variable of the object.																	   *
//**************************************************************************************************************

void inputInventoryObjects(Inventory* customer)
{
	// Display internal warning that input section of the program is for employees only.
	cout << "\n***MR. DING REPAIR AND SURF SHOP EMPLOYEES ONLY***\n\n";

	// Loop through the entire "customer" array, and set all member variables for all 5 Inventory objects.
	for (int count = 0; count < NUM_CUST; count++)
	{
		// Display input prompt title to the employee for each customer.
		cout << "\n*Enter information below for the Customer #" << count + 1 << "*\n\n";

		// Store user input for the checkInNumber member variable of an Inventory object using the inputCheckInNum funtion.
		customer[count].setCheckInNum(inputCheckInNum());

		// Clear the buffer to prepare for string inputs.
		cin.clear();
		cin.ignore(10, '\n');

		// First half of prompt to the user that specifies a prompt for a description of the board damage (second half in the function called).
		cout << "Please enter a description of the board damage ";

		// Store user input for the damageDesc member variable of an Inventory object using the inputText funtion with MAX_TEXT parameter for string length limit.
		customer[count].setDamageDesc(inputText(MAX_TEXT));

		// First half of prompt to the user that specifies a prompt for the customer's last name (second half in the function called).
		cout << "Please enter the customers last name ";

		// Store user input for the customerLast member variable of an Inventory object using the inputText funtion with MAX_TEXT parameter for string length limit.
		customer[count].setCustomerLast(inputText(MAX_TEXT));

		// First half of prompt to the user that specifies a prompt for the customer's phone number (second half in the function called).
		cout << "Please enter the customer's phone number ";

		// Store user input for the custPhone member variable of an Inventory object using the inputText funtion as the argument for the correctFormat function.
		// inputText function will get a string var from the user less than 11 characters, which will then be passed into the correctFormat function to ensure only digits are used.
		customer[count].setCustPhone(correctFormat(inputText(MAX_PHONE)));

		// First half of prompt to the user that specifies a prompt for the quoted price (second half in the function called).
		cout << "Please enter a the price quoted to the customer ";

		// Store user input for the priceQuoted member variable of an Inventory object using the inputFloat funtion.
		customer[count].setPriceQuoted(inputFloat());

		// First half of prompt to the user that specifies a prompt for the hours worked on the board (second half in the function called).
		cout << "Please enter the hours worked on this board ";

		// Store user input for the setHoursWorked member variable of an Inventory object using the inputFloat funtion.
		customer[count].setHoursWorked(inputFloat());
	}
}

//***************************************************************************************************************
// inputCheckInNum Function                                                                                     *
//                                                                                                              *
// This function prompts the user for a number greater than zero, and returns the number to the main function.  *
// If the variable entered is not greater than zero, the prompt continues until the user enter a vaild number.  *
//***************************************************************************************************************

int inputCheckInNum()
{
	int number;  // Variable to hold the user's input of a client number.

	// Prompt the user to enter a number greater than 0 and store the number into the number variable.
	cout << "Please enter a CheckIn Number for the client that is greater than '0': ";
	cin >> number;

	// Run the input from the user through the greaterThanZero function to find out if the number is greater than 0.
	// If the function returns false, continue to print a message for a new number until the function returns true.
	while (!greaterThanZero(number))
	{
		cout << "\nError, invalid input.\n";

		// Clear the buffer.
		cin.clear();
		cin.ignore(10, '\n');

		cout << "Please enter a valid number (greater than '0'): ";
		cin >> number;
	}

	// Create a space for the next prompt.
	cout << "\n";

	return number;
}

//***************************************************************************************************************
// inputText Function																					        *
//																										        *
// This function prompts the user for a string less than an integer, and returns the string to the main         *
// function. If the string length entered is not less than the integer passed into the function, the prompt     *
// continues until the user enters a valid string.																*
//***************************************************************************************************************

string inputText(int length)
{
	string description;  // Variable to hold the user's input of the board damage description.

	// Second half of the prompt from the main function that gives the prompts parameters.
	cout << "using a maximum of " << length - 1 << " characters: ";
	getline(cin, description);

	// Run the input from the user through the isLessThan function to find out if the number is less than the integer passed into the function.
	// If the function returns false, continue to print a message for a new string until the function returns true.
	while (!isLessThan(description, length))
	{
		cout << "\nError, invalid input.\n";
		cout << "Please enter a text less than " << length << " characters (a character is one letter or space): ";
		getline(cin, description);
	}

	// Create a space for the next prompt.
	cout << "\n";

	return description;
}

//***************************************************************************************************************
// inputFloat Function                                                                                          *
//                                                                                                              *
// This function prompts the user for a float variable greater than 0.0, and returns the number to the main     *
// function. If the variable entered is not greater than 0.0, the prompt continues until the user enter a       *
// vaild number. This is a versitile function and can be used to check multiple float inputs.				    *
//***************************************************************************************************************

float inputFloat()
{
	float number;  // Variable to hold the user's input of a client number.

	// Second half of the prompt from the main function that gives the prompts parameters.
	cout << "which is greater than or equal to '0.0': ";
	cin >> number;

	// Run the input from the user through the greaterThanZero function to find out if the number is greater than 0.
	// If the function returns false, continue to print a message for a new number until the function returns true.
	while (!greaterThanZero(number))
	{
		cout << "\nError, invalid input.\n";

		// Clear the buffer.
		cin.clear();
		cin.ignore(10, '\n');

		cout << "Please enter a valid number (greater than '0'): ";
		cin >> number;
	}

	// Create a space for the next prompt.
	cout << "\n";

	return number;
}


//***************************************************************************************************************
//                                               OUTPUT FUNCTIONS                                               *
//***************************************************************************************************************

//***************************************************************************************************************
// printInventoryObjects Function																				*
//																												*
// This function loops through the customer array of Inventory objects and get each member variable.			*
// Then it prints each objects member vaiables as groups.														*
//***************************************************************************************************************

void printInventoryObjects(Inventory* customer)
{
	// Print the title of the output display as the name of the business.
	cout << "\n******************************************************************************************************\n";
	cout << "\n\nMr. Ding Board Repair and Surf Shop\n\n";

	// Loop through the entire "customer" array, get all member variables for all 5 Inventory objects, and display each object.
	for (int count = 0; count < NUM_CUST; count++)
	{
		// Print information stored in the member variables for each Inventory object in the customer array.
		cout << setw(20) << left << "CheckIn Number:" << customer[count].getCheckInNum() << "\n";
		cout << setw(20) << left << "Damage:" << customer[count].getDamageDesc() << "\n";
		cout << setw(20) << left << "Cust:" << customer[count].getCustomerLast() << "\n";
		cout << setw(20) << left << "Phone:" << customer[count].getCustPhone() << "\n";
		cout << setw(20) << left << "Quote:" << "$" << setprecision(2) << fixed << customer[count].getPriceQuoted() << "\n";
		cout << setw(20) << left << "Hours:" << setprecision(1) << fixed << customer[count].getHoursWorked() << "\n";

		// Create a space for the next object output.
		cout << "\n";
	}
}
