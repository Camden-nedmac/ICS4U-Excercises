#include <iostream>
#include <cmath>
using namespace std;

int largest(int* array, int size){
    int largest = 0;
    for(int i = 0; i < size; i++){
        largest = max(largest, array[i]);
    }
    return largest;
}

int recursiveLargest(int* array, int n, int& currentLargest){

    if(n == 0){
        return max(array[n], currentLargest);
    } 
    else{
        //compare value at current index and the largest value from index n = n - 1 to n = 0
        currentLargest = max(array[n], recursiveLargest(array, n - 1, currentLargest));
        return currentLargest;
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
    largest = recursiveLargest(array, size - 1, largest);

    cout << largest;

    delete[] array;
    return 0;
}