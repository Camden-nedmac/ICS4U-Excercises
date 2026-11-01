#include <iostream>
using namespace std;

int main() {

    int num = 0;
    int sumOfDigits = 0;
    do {
      cout << "Enter a positive integer:" << endl;
      cin >> num;
    } while (num < 0);

    cout << "The digits of " << num << " are ";
    int divisor = 1;
    int remaining = num;

    //find max divisor as power of ten (ex: num=1234, divisor=1000)
    while (remaining >= 10) {
        remaining /= 10;
        divisor *= 10;
    }

    //loop through the divisor by dividing by ten, and find the digits
    while (divisor > 0) {
        int digit = num / divisor;
        num %= divisor;
        sumOfDigits += digit;

        cout << digit;
        divisor /= 10;
        
        if(divisor == 1){
            cout<< ", and ";
        } else {
            cout << (divisor > 0 ? ", " : ".");
        }
        
    }

    std::cout << "\n";
    std::cout << "The sum is " << sumOfDigits << " " << endl;

}