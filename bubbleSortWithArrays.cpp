#include <iostream>

const int SIZE = 25;
void swap(int& n1, int& n2);
void printArray(int array[], int size);

int main(){

    int numbers[SIZE];

    std::cout << "Hark! Input thine fairest numbers: " << std::endl;
    int numberOfNumbers = 0;
    for (int i = 0; i < SIZE; i++){
            int userNumber;
            std::cin >> userNumber;
            if (userNumber == 'q' || userNumber == 'Q'){
                break;
            }
            numberOfNumbers++;
            numbers[i] = userNumber;
        }

    std::cout << "Start the bubbling! \n";
    bool isSorted;
    do {
        printArray(numbers, SIZE);
        isSorted = true;
        for (int i = 0; i < SIZE; i++){
            if (numbers[i] > numbers[i+1]){
                swap(numbers[i], numbers[i+1]);
                isSorted = false;
            }
        } 
    } while (!isSorted);
    std::cout << "\nThe zeroth element is " << numbers[0];
}

void swap(int& n1, int& n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}


void printArray(int array[], int size){
    //for loop
    for (int i = 0; i < size; i++){
        std::cout << array[i] << " ";
    }
    
    // while loop
    // int index = 0;
    // while (index < size){
    //     std::cout << "\n" << array[index] << " ";
    //     index++;
    // }
    // std::cout << "\n";
}