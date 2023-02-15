/*
The following while loop does a countdown to "Blastoff"!

Convert the "while" loop to a "for" loop.
*/

#include <iostream>

using namespace std;

int main()
{
    int count;

    for (count = 5; count > 0; count--){
        cout << count << " ";
    }
    cout << "\nBlastoff!\n";

    system("pause");
    return 0;
}