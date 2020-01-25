//Diego De Los Santos
// Specification file for the NumDays class
#ifndef NUMDAYS_H
#define NUMDAYS_H

class NumDays
{
private:
	double hours;
	double days;
public:
	NumDays(double h = 0)
	{
		hours = h; days = h / 8;
	}

	void setHours(double h)
	{
		hours = h; days = h / 8;
	}

	double getHours() const
	{
		return hours;
	}

	void setDays(double d)
	{
		days = d; hours = d * 8;
	}


	//complete the following member function
	double getDays() const
	{
		return days;
	}

	//Add the following overloaded member functions to the class

	//Addition operator +: When two NumDays objects are added together, 
	//the overloaded + operator should return the sum of the two objectss' hours members.

	//Subtraction operator -: When one NumDays object is subtracted from another, 
	//the overloaded - operator should return the difference of the two objects's hours members. 

	//Prefix and Postfix (++) increment operators: These operators should increment the number of hours stored in the object. 
	//When incremented, the number of days should be automatically recalculated.

	//Prefix and Postfix(--) decrement operators : These operators should decrement the number of hours stored in the object.
	//When decremented, the number of days should be automatically recalculated.

	
	//prototype for overloaded - operator
	NumDays operator - (NumDays &);
	//write prototypes for overloaded:
	// + operator 
	NumDays operator + (NumDays &);
	// prefix ++ operator
	NumDays operator ++ ();
	//postfix ++ operator
	NumDays operator ++ (int);
	//prefix -- operator
	NumDays operator -- ();
	//postfix -- operator
	NumDays operator -- (int);

};

#endif