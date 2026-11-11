#include <iostream>
using namespace std;

void init_array(int* array, int n){
    
    if(n == 0){
        array[n] = (rand() % 50) + 1;
    } else 
    {
        array[n] = (rand() % 50) + 1;
        init_array(array, n - 1);
    }
}

int main(){
    srand(time(0));

    int size;
    cin >> size;
    int* array = new int[size];

    init_array(array, size);

    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    delete[] array;
    return 0;
}