// This program uses an inventory class to store and modify customer data for a surf board repair business.

#include <iostream>
#include <string>
#include "Inventory.h"
#include "functions.h"
using namespace std;


//********************************
//        MAIN FUNCTION          *
//********************************

int main()
{		
	Inventory customer[NUM_CUST];  // Array using the Inventory class that holds 5 Inventory objects.
	Inventory* custPtr = nullptr;  // Inventory pointer variable used to point to the customer array of Inventory objects.

	custPtr = customer;

	// Pass the custPtr pointer to the inputInventoryObjects function to prompt user for memeber variable input of the Inevtory objects in the customer array.
	inputInventoryObjects(custPtr);
	
	// Pass the cusPtr pointer to the printInventoryObjects function to print the information in the Inventory objects array "customer".
	printInventoryObjects(custPtr);

	return 0;
}
