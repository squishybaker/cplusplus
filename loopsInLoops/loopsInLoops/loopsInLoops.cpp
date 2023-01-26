// loopsInLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    for (int i = 0; i <= 5; i++) {
        std::cout << "i=" << i << std::endl;
        for (int j = 0; j <= 5; j++) {
            std::cout << "\tj=" << j << std::endl;
            for (int k = 0; k <= 5; k++) {
                std::cout << "\t\tk=" << k << std::endl;
            }
        }
    }
}
