#include <iostream>
using namespace std;

int main() {
    double value1 = 200000;
    double value2;
    
    // a) Declare the variable lPtr to be a pointer to an object of type double
    double* lPtr = nullptr;
    
    // b) Assign the address of variable value1 to pointer variable lPtr
    lPtr = &value1;
    
    // c) Print the value of the object pointed to by lPtr
    cout << "Value pointed to by lPtr: " << *lPtr << endl;
    
    // d) Assign the value of the object pointed to by lPtr to variable value2
    value2 = *lPtr;
    
    // e) Print the value of value2
    cout << "Value2 after assignment: " << value2 << endl;
    
    // f) Print the address of value1
    cout << "Address of value1: " << &value1 << endl;
    
    // g) Print the address stored in lPtr. Is the value printed the same as the address of value1?
    cout << "Address stored in lPtr: " << lPtr << endl;
    cout << (lPtr == &value1 ? "Addresses match!" : "Addresses don't match!") << endl;

    return 0;
}