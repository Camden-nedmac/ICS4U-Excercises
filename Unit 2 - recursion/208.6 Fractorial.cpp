#include <iostream>
using namespace std;

// Check if f is a factor of num
bool isFactor(int num, int f){
    return (num % f == 0) ?  true : false;
}
// Taken from 208.2
int gcd(long x, long y){
    if(y == 0){
        return x;
    } else {
        return gcd(y, x%y);
    }
}

// A fractorial (not a factorial) is the smallest number that can be evenly divided by each integer individually from 1 to n
long long fractorial(int n){
    if(n == 1){
        return 1;
    }
    long long prev = fractorial(n - 1);
    // Multiply the previous factorial by n, then divide by their greatest common denominator in order to cancel 
    // out any extra factors that didn't need to be multiplied in 
    return (prev * n) / gcd(prev, n);
}

int main() {
    
    int n;
    cin >> n;

    long long fractor = fractorial(n);

    cout << fractor;

    return 0;
}