// while.cpp
// While Loop: Checks condition before entering loop
// May run zero or more times
// The variable of test condition must be initialized before entering loop
// while(condition){
//		//statement
// }
// 
// Do-While Loop: Checks condition after entering loop
// May run multiple times but at least once
// The variable of loop condition may also be initialized in the loop as well
// do{
//		//statement
// } while(condition);

#include <iostream>

using namespace std;

int main()
{
	int numberToStart;
	cout << "what number do you want to start with? ";
	cin >> numberToStart;
	int numberToAdd;

	while (numberToAdd != 0)
	{
		cout << "What number do you want to add? (Press 0 to exit): ";
		cin >> numberToAdd;
		cout << numberToStart + numberToAdd;
	}
	// cout << "\n";
	// "do-while" loop.  do everthing in the block, while the condition is true.
		// Test at the bottom.
		// first, reset the counter
	//	counter = temp;
	// do
	// {
	//	cout << wordToSay << " ";
		// cout << "counter = " << counter << " ";
	//	counter -= 1;
	// } while (counter > 0);
	// cout << "\n";
	system("pause");
	return 0;
}