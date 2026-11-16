#include <iostream>
using namespace std;

int recursiveSeq1(int n){
    if(n == 1){
        return 3; // The first term for this sequence
    } else {
        return recursiveSeq1(n - 1) - 2;
    }
}

int recursiveSeq2(int n){
    if(n == 1){
        return -1; // The first term for this sequence
    } else {
        return recursiveSeq2(n - 1) * 2;
    }
}

int main(){

    int n;
    cin >> n;

    cout << recursiveSeq1(n)<< endl;
    cout << recursiveSeq2(n)<< endl;

    return 0;
}