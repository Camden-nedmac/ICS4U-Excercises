#include <iostream>
#include <cmath>
using namespace std;

void secondPowers(long *array, int n){
    if(n == 0){
        array[n] = pow(2,n);
    } else {
        array[n] = pow(2,n);
        secondPowers(array, n - 1);
    }
}

int main(){

    int size;
    cin >> size;

    long* array = new long[size];
    secondPowers(array, size);

    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    
    delete[] array;

    return 0;
}