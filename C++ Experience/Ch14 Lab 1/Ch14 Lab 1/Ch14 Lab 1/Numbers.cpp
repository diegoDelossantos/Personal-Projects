#include <iostream>
#include <string>
#include <cmath>
#include "numbers.h"
using namespace std;

Numbers::Numbers()
{
	convert();
}

Numbers::Numbers(int n)
{
	setNum(n);
}

void Numbers::setNum(int n)
{
	if (n >= 0 && n <= 9999)
		num = n;
	else
	{
		cout << n << " is outside the range of 0 and 9999. Please try a number within the range." << endl;
	}
	convert();
}

void Numbers::print()
{
	cout << snumber;
}

void Numbers::convert()
{
	string lessThan20[] = { "zero ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ","thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eighteen ","nineteen " };
	string hundred = "hundred";
	string thousand = "thousand";
	string tens[] = { "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" };


	int n = num;
	snumber = "";

	if ((n / 1000) > 0)
	{
		snumber = snumber + lessThan20[n / 1000];
		snumber = snumber + thousand;
		snumber = snumber + " ";
		n = n % 1000;
	}

	if ((n / 100) > 0)
	{
		snumber = snumber + lessThan20[n / 100];
		snumber = snumber + hundred;
		snumber = snumber + " ";
		n = n % 100;
	}

	if (n >= 20)
	{
		snumber = snumber + tens[(n / 10) - 2];
		n = n % 10;
		if (n > 0)
		{
			snumber = snumber + " ";
		}
	}

	if (n > 0)
	{
		snumber = snumber + lessThan20[n];
	}

	return;
}