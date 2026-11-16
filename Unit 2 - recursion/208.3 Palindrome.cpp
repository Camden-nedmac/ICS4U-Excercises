#include <iostream>
#include <string>
using namespace std;

string reverse(string word){
    if(word.length() == 1){
        return word;
    } else {
        char letter = word[0];
        word.erase(0,1);
        return reverse(word) + letter;
    }
}

bool isPalindrome(string s1, string s2){
    
}

int main(){
    string s;
    getline(cin, s);

    cout << reverse(s);

    return 0;
}