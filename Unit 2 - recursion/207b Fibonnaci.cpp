#include <iostream>
using namespace std;

long fibonnaci(int n){

    if(n == 0){
        return 0;
    } 
    else if(n == 1){
        return 1;
    } 
    else {
        return fibonnaci(n - 2) + fibonnaci(n - 1);
    }
}

int main(){
    int term;
    cout << "Enter the Nth term you would like from the fibonnaci sequence (numbers greater than 40 are not recommended)" << endl;
    cin >> term;

    
    long num = fibonnaci(term);
    cout << num << endl;
    return 0;
}