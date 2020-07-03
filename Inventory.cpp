// Implementation file for the Inventory class.

#include <iostream>
#include <string>
#include "Inventory.h"
using namespace std;

//*****************************************************************************************
// Constructor #1 is the default constructor and sets all member variables to 0 or NULL.  *
//*****************************************************************************************

Inventory::Inventory()
{
	checkInNumber = 0;
	damageDesc = "";
	customerLast = "";
	custPhone = "";
	priceQuoted = 0.0;
	hoursWorked = 0.0;
}

//************************************************************************************
// setCheckInNum sets a value greater than 0 for the member variable checkInNumber.  *
//************************************************************************************

void Inventory::setCheckInNum(int num)
{
	// If the number passed in is greater than zero, store int variable into the checkInNumber member variable.
	// If the number is less than or equal to zero, print an error message and exit the program.
	if (num > 0)
	{
		checkInNumber = num;
	}
	else
	{
		cout << "Invalid check-in number.\n";
		exit(EXIT_FAILURE);
	}
}

//*********************************************************************************************************
// setDamageDesc sets a string value that is less than 25 characters for the member variable damageDesc.  *
//*********************************************************************************************************

void Inventory::setDamageDesc(string desc)
{
	// If the string passed in is less than 25 characters, store the string variable into the damageDesc member variable.
	// If the string is 25 characters or larger, print an error message and exit the program.
	if (desc.length() < 25)
	{
		damageDesc = desc;
	}
	else
	{
		cout << "Invalid description.\n";
		exit(EXIT_FAILURE);
	}
}

//*************************************************************************************************************
// setCustomerLast sets a string value that is less than 25 characters for the member variable customerLast.  *
//*************************************************************************************************************

void Inventory::setCustomerLast(string name)
{
	// If the string passed in is less than 25 characters, store the string variable into the customerLast member variable.
	// If the string is 25 characters or larger, print an error message and exit the program.
	if (name.length() < 25)
	{
		customerLast = name;
	}
	else
	{
		cout << "Invalid name.\n";
		exit(EXIT_FAILURE);
	}
}

//*******************************************************************************************************
// setCustPhone sets a string value that is less than 11 characters for the member variable custPhone.  *
//*******************************************************************************************************

void Inventory::setCustPhone(string phoneNum)
{
	// If the string passed in is less than 11 characters, store the string variable into the custPhone member variable.
	// If the string is 11 characters or larger, print an error message and exit the program.
	if (phoneNum.length() < 11)
	{
		custPhone = phoneNum;
	}
	else
	{
		cout << "Invalid phone number.\n";
		exit(EXIT_FAILURE);
	}
}

//*************************************************************************************
// setPriceQuoted sets a value greater than 0.0 for the member variable priceQuoted.  *
//*************************************************************************************

void Inventory::setPriceQuoted(float price)
{
	// If the number passed in is greater than 0.0, store float variable into the priceQuoted variable.
	// If the number is less than less than or equal to 0.0, print an error message and exit the program.
	if (price > 0.0)
	{
		priceQuoted = price;
	}
	else
	{
		cout << "Invalid price.\n";
		exit(EXIT_FAILURE);
	}
}

//*************************************************************************************
// setHoursWorked sets a value greater than 0.0 for the member variable hoursWorked.  *
//*************************************************************************************

void Inventory::setHoursWorked(float hours)
{
	// If the number passed in is greater than 0.0, store float variable into the hoursWorked member variable.
	// If the number is less than less than or equal to 0.0, print an error message and exit the program.
	if (hours > 0.0)
	{
		hoursWorked = hours;
	}
	else
	{
		cout << "Invalid hours.\n";
		exit(EXIT_FAILURE);
	}
}
