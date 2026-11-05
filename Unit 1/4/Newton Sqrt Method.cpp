#include <iostream>
#include <cmath>
using namespace std;

// Create Functions to perform necessary calculations of Newton's Method
bool isWithinPrecision(double guess, double actual, double precision){
    if(guess < actual + precision && guess > actual - precision){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    double number, initialGuess, precision;
    int iterations = 0;
    
    cout << "Enter the number to find the square root of: ";
    cin >> number;
    
    cout << "Enter your initial guess: ";
    cin >> initialGuess;
    
    cout << "Enter the precision (how close to actual value): ";
    cin >> precision;

    double actualSquareRoot = sqrt(number);
    double guess = initialGuess;
    //newton method calculations
    do{
      guess = 0.5 * (guess + (number / guess));
      iterations++;
    }while(!isWithinPrecision(guess, actualSquareRoot, precision));
   
    
    cout << "Close value: " << guess << endl;
    cout << "Number of iterations: " << iterations << endl;
    
    return 0;
}
