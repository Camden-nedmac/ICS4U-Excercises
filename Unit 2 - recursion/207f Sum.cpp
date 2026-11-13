#include <iostream>
#include <cmath>
using namespace std;

int sum(int *array, int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}

//POV: we have the function at home
//the function:
void recursiveSum(int *array, int n, int& sum){
    if(n == 0){
        sum += array[n];
    }
    else {
        //this just feels wrong. like bleh
        sum += array[n];
        recursiveSum(array, n - 1, sum);
    }
}

int main(){

    int size;
    cin >> size;
    int* array = new int[size];

    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
    
    //cout << sum(array, size);

    int sum = 0;
    recursiveSum(array, size - 1, sum);
    cout << sum;
    
    delete[] array;

    return 0;
}