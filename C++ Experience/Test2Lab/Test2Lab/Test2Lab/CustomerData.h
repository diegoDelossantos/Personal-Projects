// CustomerData class
#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include <string>
#include "PersonData.h"
using namespace std;

class CustomerData :public PersonData // class is derived from PersonData class using public inheritcane
{
private:
	int customerNumber;     // Customer number
	bool mailingList;       // Include in mailing list?

public:
	// Default Constructor                         
	CustomerData() : PersonData()
	{
		customerNumber = 0;
		mailingList = false;
	}

	// Constructor
	CustomerData(string ln, string fn, string addr,string c, string s, string z, int cn,bool ml) :PersonData(ln, fn, addr, c, s, z)
	{
		customerNumber = cn;
		mailingList = ml;
	}


	// Mutator functions 
	void setCustomerNumber(int cn)
	{
		customerNumber = cn;
	}

	void setMailingList(bool ml)
	{
		mailingList = ml;
	}

	// Accessor functions
	int getCustomerNumber()
	{
		return customerNumber;
	}

	bool getMailingList()
	{
		return mailingList;
	}
};

#endif