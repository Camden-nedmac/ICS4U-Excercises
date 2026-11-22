#include <iomanip>
#include <iostream>
using namespace std;

double recursiveAverage(int* array, int n){
    
    if(n==0){
        return array[0];
    } else {
        double previousMean = recursiveAverage(array, n - 1);
        cout << "n: " << n << " - ";
        cout <<" prevMean: " <<previousMean;
        // number at current index is weighted at n^-1 th of the current mean 
        // Ex at n = 2:
        // let arr[2] = 10 and prevMean = 20 (prevMean being the mean of value )
        double currentMean = previousMean * n/(n+1) + (double)1/(n+1) * array[n];
        cout << " currentMean: " << currentMean << endl;
        return currentMean;
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

    double avg = recursiveAverage(array, size - 1);

    cout << fixed << setprecision(1) << avg;

    delete[] array;
    return 0;
}