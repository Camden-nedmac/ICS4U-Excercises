#include <iostream>
#include <cmath>
using namespace std;

int recursiveLargest(int* array, int n){
    if(n == 0){
        return array[n];
    } 
    else{
        //compare value at current index and the largest value from index n = n - 1 to n = 0
        return max(array[n], recursiveLargest(array, n - 1));
    }
}

int main(){

    int size;
    cin >> size;

    //initialize array from user input
    int* array = new int[size];
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int largest = 0;
    largest = recursiveLargest(array, size - 1);

    cout << largest;

    delete[] array;
    return 0;
}