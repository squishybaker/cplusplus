// I think if there is too much input, you get an overflow from the array and the program crashes
// Score Statistics 

/*
-User input x number of test scores
-Store input in an array
-Loop over array
    -Output:
        -Max
        -Min
        -Average
-Extra street cred:
    -Add names
    -Produce output that says who was closest to average
*/

#include <iostream>
#include <string>

double average(int a[], int b);

int main(){
    // std::string student;
    int i, testScores;
    
    std::cout << "How many students and test scores? " << "\n";
    std::cin >> testScores;
    int *arr = new int(i);

    std::cout << "Enter the scores:" << std::endl;
    for (i = 0; i < testScores; i++){
        std::cin >> arr[i];
    }
    for (i = 0; i < testScores; i++){
        std::cout << arr[i] << " ";
    }
    
    std::cout << "\nThe average test score was " << average(arr, testScores);
    
    
    delete [] arr;
    return 0;
}

double average(int a[], int b){
    int sum = 0;
    for (int j = 0; j < b; j++)
        sum += a[j];
    
    return (float)sum / b;
}
