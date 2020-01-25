//Diego De Los Santos
#include <iostream>
#include "numdays.h"
using namespace std;

int main()
{
	NumDays one(25), two(15), three, four;

	// Display one and two.
	cout << "One: " << one.getDays() << endl;
	cout << "Two: " << two.getDays() << endl;
	// Add one and two, assign result to three.
	three = one + two;
	// Display three.
	cout << "Three: " << three.getDays() << endl;

	// Postfix increment object three and assign to object four
	//________________________________
	four = three++;
	cout << "----------------- " << four.getDays() << endl;

	// Prefix increment object three and assign to object four
	//__________________________________________
	four = ++three;
	cout << "---------------------" << four.getDays() << endl;

	// Postfix decrement object three and assign to object four
	//__________________________________
	four = three--;
	cout << ".................... " << four.getDays() << endl;

	// Prefix decrement object three and assign to object four
	//______________________________________
	four = --three;
	cout << ".................... " << four.getDays() << endl;


	return 0;
}