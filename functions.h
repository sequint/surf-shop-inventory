// Function prototype file for all non-class member functions in the program.

#pragma once
#include "Inventory.h"
using namespace std;

// Global constant variables.
const int MIN_INT = 0;		  // Constant variable to hold the minimum value for member variable checkInNum.
const float MIN_FLOAT = 0.0;  // Constant variable to hold the minimum values for priceQuoted and hoursWorked member variables.
const int NUM_CUST = 5;       // Constant variable to hold the number of Inventory objects (customers) in an array.
const int MAX_TEXT = 25;      // Constant variable that holds one more than the max number of characters that can be stored in the string variable for member variables,
							  // damageDesc and customerLast.
const int MAX_PHONE = 11;     // Constant variable that holds one more than the max number of characters that can be stored in the string variable for member variable custPhone.


//****************************************
// InputOutput Functions Prototypes      *
//****************************************

// Input Prototypes
void inputInventoryObjects(Inventory*);  // LEFT OFF HERE!!
int inputCheckInNum();
string inputText(int);
float inputFloat();

// Output Prototypes
void printInventoryObjects(Inventory*);


//****************************************
// Input Validation Function Prototypes  *
//****************************************

bool greaterThanZero(int);
bool greaterThanZero(float);
bool isLessThan(string, int);
string correctFormat(string);
