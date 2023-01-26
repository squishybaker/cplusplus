// loopingPractice.cpp

#include <iostream>
#include <Windows.h>

int main()
{
    // countdown from 10 to 0

    // need a count
    int count = 10;
    // loop over the count
    while (count >= 0) {
        // decrement the count
        std::cout << count << "\n";
        Sleep(500);
        count--;
    }
    std::cout << "Happy New Year!\n";

    // for
    for (int i = 10; i >= 0; i--) {
        std::cout << i << "\n";
        Sleep(500);
    }
    std::cout << "Happy New Year!\n";
}


// for (int count = 1; count <= 10000; count += count){
    // std::cout << count << "\n"
    // Sleep(100);
//}