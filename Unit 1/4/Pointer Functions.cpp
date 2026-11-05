#include <iostream>
#include <iomanip>
#include <cmath>
#include <assert.h>
#include <numbers>
using namespace std;

// Q1: Create cubeByPointer() function here
void cubeByPointer(int* num) {
    *num = (*num) * (*num) * (*num);
}

// Q2: Create reduceTwoInt() function here
void reduceTwoInt(int* numer, int* denom) {
    int a = *numer;
    int b = *denom;
    while (b != 0){
        int remainder = a % b;
        a = b;
        b = remainder;
    } ;
    *numer /= a;
    *denom /= a;
}

// Q3: Create circle() function here
void circle(double radius, double* area, double* circumference){
    *area = M_PI * radius * radius;
    *circumference = 2 * M_PI * radius;
}

// Q4: Create quadEquation() function here
bool quadEquation(double a, double b, double c, double* sol1, double* sol2){
    //check if discriminant isn't negative (unreal solution)
    if((b*b - 4*a*c) < 0){
        return false;
    }
    else{
        *sol1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        *sol2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        return true;
    }
}

// Q5: Fix and create swap() function here
//error: not dereferencing the pointers, which just swaps the local pointers and not the values they point to
void swap(float *p1, float *p2){
    float temp = *p1;      
    *p1 = *p2;       
    *p2 = temp;     
}

// Q6: Fix SquareComplex() function here
//error: value of a is changed before calculating new value of b
void SquareComplex(double &a, double &b) {
    // Squares a complex number a + bi
    int tempA = a;
    a = a*a - b*b;
    b = 2*tempA*b;  
}

int main() {
    // Q1 Testing code (Expected value should be 8)
    int num = 2;
    cout << "Cube of " << num << " is ";
    cubeByPointer(&num);
    cout << num << endl;

    // Q2 Testing code (Expected value should be 6/15 = 2/5)
    int numB = 15;
    int numA = 6;
    reduceTwoInt(&numA, &numB);
    cout << "The reduced values are: " << numA << "/" << numB << endl;

    // Q3 Testing code (Expected: area = 9*pi, circumference = 6*pi)
    double areaStored, circStored;
    double radius = 3;
    circle(radius, &areaStored, &circStored);
    cout << setprecision(6) << "\nArea: " << areaStored << endl;
    cout << setprecision(6) << "Circumference: " << circStored << endl << endl;

    // Q4 Testing code
    double sol1, sol2;
    if (quadEquation(2, -8, -10, &sol1, &sol2)) {
        cout << "Solution 1: " << setprecision(6) << sol1 << endl;
        cout << "Solution 2: " << setprecision(6) << sol2 << endl;
    }
    else {
        cout << "No Solution" << endl;
    }

    if (quadEquation(1, 0, 0, &sol1, &sol2)) {
        cout << "Solution 1: " << setprecision(6) << sol1 << endl;
        cout << "Solution 2: " << setprecision(6) << sol2 << endl;
    }
    else {
        cout << "No Solution" << endl;
    }

    if (quadEquation(6, 6, 3, &sol1, &sol2)) {
        cout << "Solution 1: " << setprecision(6) << sol1 << endl;
        cout << "Solution 2: " << setprecision(6) << sol2 << endl;
    }
    else {
        cout << "No Solution" << endl;
    }

    // Q5 Testing code
    float val1 = 0, val2 = 1;
    swap(&val1, &val2);
    assert(val1 == 1);
    assert(val2 == 0);
    cout << "Swapped: " << val1 << " " << val2 << endl << endl;

    // Q6 Testing code
    double a = 5, b = 2;
    SquareComplex(a, b);
    cout << setprecision(6) << "Squared real: " << a << endl;
    cout << setprecision(6) << "Squared imaginary: " << b << endl;
    cout << setprecision(6) << a << " + " << b << "i" << endl;

    return 0;
}