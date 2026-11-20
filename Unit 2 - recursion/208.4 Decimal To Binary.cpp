#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int quotient, string s){
    //cout << "quot: " << quotient << " binary: " << s << endl;
    if(quotient / 2 == 0){
        return to_string(quotient % 2) + s;
    } else {
        // awful ahh readability
        // but like divides by two recursively (decimal gets truncated automatically)
        // and appends the remainder bit to the start of the current binary string
        return decimalToBinary((quotient / 2), to_string(quotient % 2) + s);
    }
}

int main(){

    int n;
    cin >> n;
    string binary = "";

    cout << decimalToBinary(n, binary);

    return 0;
}