#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int* fillArrayAndSum(int size){
    int* arr = new int[size];
    cout << "Enter array elements: " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    return arr;
}
void mergeArrays(int* arr1, int* arr2, int size1, int size2, int* mergedArr){
    for(int i = 0; i < size1; i++){
        mergedArr[i] = arr1[i];
    }
    for(int i = 0; i < size2; i++){
        mergedArr[size1 + i] = arr2[i];
    }
}
void printArray(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    
    int arraySize1, arraySize2;
    int* arr1 = nullptr;
    int* arr2 = nullptr;
    cout << "Enter size of first array: ";
    cin >> arraySize1;
    arr1 = fillArrayAndSum(arraySize1);
    
    cout << "Enter size of second array: ";
    cin >> arraySize2;
    arr2 = fillArrayAndSum(arraySize2);

    //mewrge them
    int mergedSize = arraySize1 + arraySize2;
    int* mergedArray = new int[mergedSize];
    mergeArrays(arr1, arr2, arraySize1, arraySize2, mergedArray);

  
    //print the merged array
    cout << "Merged array: " << endl;
    printArray(mergedArray, mergedSize);

    cout << "\nProgram finished. Memory cleaned up!" << endl;
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;
    return 0;
}
