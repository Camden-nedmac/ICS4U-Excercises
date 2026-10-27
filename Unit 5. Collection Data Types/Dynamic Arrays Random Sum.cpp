#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// TODO: Write a void function that:
// 1. Takes an  integer parameter 'size' for the array size
// 2. Dynamically allocates an array of that size
// 3. Fills the array with random numbers from 1-50
// 4. Calculates and prints the sum of all elements
// 5. Prints the array contents
// 6. Deletes the array when done
void fillArrayAndSum(int size){
    int* arr = new int[size];
    int sum = 0;
    int max = 50;
    int min = 1;
    for(int i = 0; i < size; i++){
        // 1 - 50 inclusive
        arr[i] = (std::rand() % max) + min;
        sum += arr[i];
    }
    std::cout << "Sum: " << sum << std::endl;
    delete[] arr;
}


int main() {
    srand(time(0)); // Seed the random number generator
    
    // Test your function with an array of size 10
    fillArrayAndSum(10);
    
    cout << "\nProgram finished. Memory cleaned up!" << endl;
    
    return 0;
}
