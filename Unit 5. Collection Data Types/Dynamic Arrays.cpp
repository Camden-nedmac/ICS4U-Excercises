#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// TODO: Write a void function that:
// 1. Takes an integer parameter 'size' for the array size
// 2. Dynamically allocates an array of that size
// 3. Fills the array with user entered data
void arrayFill(int &size, int *array){
    cout << "Enter elements: " << endl;
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}


int main() {
    // Ask user for number of values
    int size;
    cout << "Enter number of elements: " << endl;
    cin >> size;

    //Call your function to fill the array
    int *array = new int[size];
    arrayFill(size, array);

    //print the contents of the array - you may do this in a separate function but do not do it inside your collection
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    
    delete[] array; 
    cout << "\nProgram finished. Memory cleaned up!" << endl;

    return 0;
}
