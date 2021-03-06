// ProducerConsumer.cpp : Defines the entry point for the console application.
//Diego De Los Santos

#include "stdafx.h"
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>

#define BUFFER_SIZE 50
int buffer[BUFFER_SIZE];

using namespace std;

void producer(int& counter, int& in)
{
	int prod_count = rand() % 5 + 1;
	cout << "\nitems before producer call: " << counter << endl;
	for (int i = 0; i < prod_count&&counter < BUFFER_SIZE; i++)
	{
		buffer[in] = 1;
		counter += 1;
		in = (in + 1) % BUFFER_SIZE;
	}
	if (counter == BUFFER_SIZE)
		cout << "\nItems after producer call: " << BUFFER_SIZE << "(Buffer full)\n";
	else
		cout << "\nItems after producer call: " << counter << endl;
}

void consumer(int& counter, int& out)
{
	int prod_count = rand() % 5 + 1;
	cout << "\nItems before consumer call: " << counter << endl;
	for (int i = 0; i < prod_count && counter >0; i++)
	{
		buffer[out] = 0;
		counter -= 1;
		out = (out + 1) % BUFFER_SIZE;
	}
	if (counter == 0)
		cout << "\nItems after consumer call: 0 (Buffer empty)\n";
	else
		cout << "\nItems after consumer call: " << counter << endl;
	
}

int main()
{
	int x;
	srand(time(0));
	int in = 0, out = 0;
	cout << "Enter the number of times the loop should run: ";
	cin >> x;
	memset(buffer, 0, sizeof(buffer));
	int random_int, counter = 0;
	for (int i = 0; i < x; i++)
	{
		random_int = rand() % 2;
		if (random_int)
		{
			consumer(counter, in);
		}
		else
		{
			producer(counter, out);
		}
	}
}

