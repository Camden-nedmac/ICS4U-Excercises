#include <iostream>
using namespace std;

int recursivePower(int base, int n){
    //cout << "n = " << n << endl;
    if(n == 0){
        return 1;
    } 
    else {
        return base * recursivePower(base, n - 1);
    }
}


int main(){

    int base, exponent;

    cin >> base;
    cin >> exponent;

    cout << recursivePower(base, exponent);

    return 0;
}