// FavoriteNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// FavNumber.cpp
//
#include <iostream>
using namespace std;
int main()
{
	// Declare variables at the top of the program.
	// int for integers, char for a character, string for words and sentences
	float fav_number;
	// ask a question
	cout << "What is your favorite number?: ";
	// get an answer, put it in a variable
	cin >> fav_number;
	// output text and the variable
	cout << "Your favorite number is ";
	cout << fav_number;
	cout << ".\n";
	system("pause");
	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
