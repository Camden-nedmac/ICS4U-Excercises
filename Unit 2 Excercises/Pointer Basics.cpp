#include <iostream>
using namespace std;


int main(){
    int num = 123;
    int* pnum = &num;
    cout << "Value of number: " << num << endl;
    cout << "Address of number: " << &num << endl;
    cout << "Value of pointer: " << pnum << endl;
    cout << "Value pointed to by pointer: " << *pnum << endl;
    return 0;
}