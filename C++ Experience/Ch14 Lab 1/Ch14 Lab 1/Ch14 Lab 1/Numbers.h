#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Numbers
{
private:
	int num;
	string snumber;

public:
	Numbers();
	Numbers(int);
	void setNum(int);
	void print();
	void convert();
};