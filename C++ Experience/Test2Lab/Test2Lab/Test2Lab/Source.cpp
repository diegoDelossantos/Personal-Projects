// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes
#include <iostream>
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;

// Function prototype
void displayCustomer(CustomerData);

int main()
{
	// Create a CustomerData object and pass arguments to the constructor.

	CustomerData object("Smith", "Jon", "321 ave", "Bronx", "NY", "2503", 456, true);

	// Display the object's data.
	cout << "Customer #1\n" << "-----------\n";
	displayCustomer(object);

	// Create another CustomerData object using the default constructor and mutator functions.

	CustomerData object2;
	object2.setLastName("De los Santos");
	object2.setFirstName("Diego");
	object2.setAddress("4808 Park ave");
	object2.setCity("Weehawken");
	object2.setState("NJ");
	object2.setZip("07086");
	object2.setCustomerNumber(123);
	object2.setMailingList(false);

	// Display the object's data.
	cout << "Customer #2\n" << "-----------\n";
	displayCustomer(object2);
	return 0;
}

//******************************************************
// The displayCustomer function accepts a CustomerData *
// object as its argument and displays the object's    *
// data.                                               *
//******************************************************

void displayCustomer(CustomerData c)
{
	// Display all the data but mailing list...
	cout << "Last Name: " << c.getLastName() << endl
		<< "First Name: " << c.getFirstName() << endl
		<< "Address: " << c.getAddress() << endl
		<< "City: " << c.getCity() << endl
		<< "State: " << c.getState() << endl
		<< "ZIP: " << c.getZip() << endl
		<< "Customer Number: "
		<< c.getCustomerNumber() << endl
		<< "Mailing List? ";

	// Dispaly Yes or No for mailing list.
	if (c.getMailingList())
		cout << "Yes\n\n";
	else
		cout << "No\n\n";
}