//Dominga Lapurkaite, Staje Kankati, Diego De Los Santos 
//Chapter 14 Lab 1

#include <iostream>
#include <string>
#include <cmath>
#include "numbers.h"
using namespace std;

int main()
{
	Numbers num;
	int n;
	cout << "Enter a number between 0 and 9999: ";
	cin >> n;
	num.setNum(n);
	if (n >= 0 && n <= 9999)
	{
		cout << "The number in words is: ";
		num.print();
		cout << endl;
	}
	
	return 0;
}