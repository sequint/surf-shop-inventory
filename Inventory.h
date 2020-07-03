// Specification file for the Inventory class.

#ifndef INVENTORY_H
#define INVENTORY_H
#include <string>
using namespace std;

class Inventory
{
private:
	int checkInNumber;    // Variable that holds a positive number assigned by the clerk when the board is brought in for repair.
	string damageDesc;    // Variable that holds a discription of the repair needs.
	string customerLast;  // Variable that holds the customer's last name.
	string custPhone;     // Variable that holds the customer's last name.
	float priceQuoted;    // Variable that holds the quoted repair price.
	float hoursWorked;    // Variable that holds the hours of labor it took to repair the board.
public:
	Inventory();  // Constructor #1 (default)

	// Member functions that set values of the member variables.
	void setCheckInNum(int);
	void setDamageDesc(string);
	void setCustomerLast(string);
	void setCustPhone(string);
	void setPriceQuoted(float);
	void setHoursWorked(float);


	int getCheckInNum() const       // Returns the value in the member variable checkInNumber.
	{
		return checkInNumber;
	}
	string getDamageDesc() const    // Returns the value in the member variable damageDesc.
	{
		return damageDesc;
	}
	string getCustomerLast() const  // Returns the value in the member variable customerLast.
	{
		return customerLast;
	}
	string getCustPhone() const     // Returns the value in the member variable custPhone.
	{
		return custPhone;
	}
	float getPriceQuoted() const    // Returns the value in the member variable priceQuoted.
	{
		return priceQuoted;
	}
	float getHoursWorked() const    // Returns the value in the member variable hoursWorked.
	{
		return hoursWorked;
	}
};
#endif
