/*
The following while loop should produce "2 4 6 8 Who do we appreciate?"

1) What does it do?
2) Enter one corrected line that fixes the program.
*/

#include <iostream>

using namespace std;
int main()
{
    int count = 2;

    // Cheer loop
    while (count != 10)
    {
        cout << count << " ";
        count += 2;
    }
    cout << "\nWho do we appreciate?\n";
    system("pause");
    return 0;
}