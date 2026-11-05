#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare and initialize num1 and num2
    int num1 = 50;
    int num2 = 100;
    
    // Step 2: Declare a pointer pnum and initialize to NULL
    int* pnum = nullptr;
    
    // Step 3: Make pnum point to num1, increment num1 by 10 using *pnum
    pnum = &num1;
    *pnum += 10; 
    
    // Print num1 and the address in pnum
    cout << "After incrementing num1:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "pnum points to address: " << pnum << endl;
    cout << endl;
    
    // Step 4: Make pnum point to num2, multiply num2 by 10 using *pnum, assign to num1
    pnum = &num2;
    *pnum *= 10;
    num1 = *pnum;
    
    // Print num1, address in pnum, and value at pnum
    cout << "After multiplying num2 and assigning to num1:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "pnum points to address: " << pnum << endl;
    cout << "*pnum (value at that address) = " << *pnum << endl;
    
    return 0;
}
