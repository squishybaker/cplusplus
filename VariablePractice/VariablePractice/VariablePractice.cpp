// Variables.cpp

#include <iostream>

using namespace std;

int main()
{
	// Variables are spaces in memory you reserve with a name and a type.
	// Variable names must start with a letter or underscore and may 
	// also contain digits.
	// All variables in c++ must be declared before used.
	// They may be initialized when declared.
	// Some code to make doubles have two decimal points
	cout.setf(ios::fixed);
	// setf means set flag
	cout.setf(ios::showpoint);
	// input output stream (fixed) (showpoints)
	cout.precision(2);
	// precision shows however many decimal places
	// int for integers
	int count1;
	// declare count1
	int count2 = 7;
	// declare and define count2
	// double for decimal numbers
	double price = 8.00, discount(0.33333), quantity, total;
	// you can declare multiple variables on the same line
	// parentheses are another way to declare values
	double cost = 5.50;
	// char for letters, use single quotes.
	char letter, Letter, LETTER;
	char grade = 'A';
	// double quotes are for strings, single quotes are for characters
	char asciiCode = 3;
	// TODO lookup asciicode
	cout << "ascii code 3 is " << asciiCode << "\n";
	// string for words and phrases, use double quotes.
	string password;
	string greeting = "Hello";
	// Assignment statements
	// Stuff on the right goes into the variable on the left.
	quantity = 5;
	total = quantity * price * (1 - discount);
	// Output together
	cout << quantity << " items at " << price << " each with " << 100 * discount << "% discount\n";
	// Output in pieces
	cout << "total = ";
	cout << total;
	cout << endl;
	// Rounding test, start with precision of 2 decimal places
	total = .333 + .333 + .333;
	cout << "test total = ";
	cout << total;
	cout << endl;
	// Change precision to see actual contents
	cout.precision(5);
	cout << "test total = ";
	cout << total;
	cout << endl;
	system("pause");
	return 0;
}