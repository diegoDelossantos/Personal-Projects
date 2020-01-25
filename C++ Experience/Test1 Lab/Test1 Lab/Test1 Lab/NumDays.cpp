//Diego De Los Santos
// Implementation file for the NumDays class
#include "NumDays.h"

//**********************************************
// Overloaded + operator                       *
//**********************************************
//write code for overloaded + operator
NumDays NumDays::operator + (NumDays &right)
{
	NumDays temp;

	temp.setHours(hours + right.getHours());
	return temp;
}

//**********************************************
// Overloaded - operator                       *
//**********************************************
NumDays NumDays::operator - (NumDays &right)
{
	NumDays temp;

	temp.setHours(hours - right.getHours());
	return temp;
}

//**********************************************
// Overloaded prefix ++ operator               *
//**********************************************
////write code for overloaded prefix ++ operator
NumDays NumDays::operator ++ ()
{
	++hours;
	days = hours / 8;
	return *this;
}

//**********************************************
// Overloaded postfix ++ operator              *
//**********************************************
////write code for overloaded postfix ++ operator
NumDays NumDays::operator ++ (int)
{
	hours++;
	days = hours / 8;
	return *this;
}

//**********************************************
// Overloaded prefix -- operator               *
//**********************************************
//write code for overloaded prefix -- operator.
NumDays NumDays::operator-- ()
{
	--hours;
	days = hours / 8;
	return *this;
}

//**********************************************
// Overloaded postfix -- operator              *
//**********************************************
//write code for overloaded postfix -- operator.
NumDays NumDays::operator -- (int)
{
	hours--;
	days = hours / 8;
	return *this;
}