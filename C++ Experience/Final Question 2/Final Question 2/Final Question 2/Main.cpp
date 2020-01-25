#include <iostream>
#include <fstream>
#include "IntStack.h"
using namespace std;

int main()
{
	int readVar;// To hold values popped off the stack
	ifstream inputFile1;
	inputFile1.open("Push.txt");
	ofstream outputFile2;
	outputFile2.open("POP.txt");


	// Define a stack object to hold 5 values.
	IntStack stack(5);

	// Push the values 5, 10, 15, 20, and 25 onto the stack.

	cout << "Elements read and Pushed" << endl;
	inputFile1 >> readVar;
	stack.push(readVar);
	inputFile1 >> readVar;
	stack.push(readVar);
	inputFile1 >> readVar;
	stack.push(readVar);
	inputFile1 >> readVar;
	stack.push(readVar);
	inputFile1 >> readVar;
	stack.push(readVar);
	

	// Pop the values off the stack.
	cout << "Elements Poped" << endl;
	stack.pop(readVar);
	outputFile2 << readVar << endl;
	stack.pop(readVar);
	outputFile2 << readVar << endl;
	stack.pop(readVar);
	outputFile2 << readVar << endl;
	stack.pop(readVar);
	outputFile2 << readVar << endl;
	stack.pop(readVar);
	outputFile2 << readVar << endl;
	return 0;
}