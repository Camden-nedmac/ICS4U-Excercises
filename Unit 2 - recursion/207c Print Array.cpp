#include <iostream>
using namespace std;

//why the helly would this be done recursively
void printArrayRecursive(int* array, int n){

    if(n == 0){
        cout << array[n] << " ";
    } else 
    {
        printArrayRecursive(array, n - 1);
        cout << array[n] << " ";
    }
}

int main() {

    cout << "Enter array size: " << endl;
    int size;
    cin >> size;

    int* array = new int[size];

    //take input
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    //output the input -- very complicated, not for the weak minded
    printArrayRecursive(array, size - 1);

    delete[] array;

    return 0;
}