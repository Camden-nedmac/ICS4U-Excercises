#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string reverseRecursive(string word){
    if(word.length() == 1){
        return word;
    } else {
        // Store first char, erase first letter in string, then add the char to the end and repeat recursively
        char letter = word[0];
        word.erase(0,1);
        return reverseRecursive(word) + letter;
    }
}

string isPalindrome(string s1, string s2){
    // Remove whitespace
    for(int i = s1.size() - 1; i >= 0; i--){
        if(s1[i] == ' '){
            s1.erase(i, 1);
        }
        if(s2[i] == ' '){
            s2.erase(i, 1);
        }
        //cout << s1 << " - " << s2 << endl;
    }
    
    // Lowercase all letters via its reference
    for(char& c : s1){
        // why the heck is it tolower and not toLower. bleh
        c = tolower(c);
    }
    for(char& c : s2){
        c = tolower(c);
    }
    
    // Yes im returning a string, no im not gonna cast a bool to a string
    if(s1 == s2){
        return "true";
    } // else
    return "false";
} 

int main(){
    string s, rev;
    getline(cin, s);

    rev = reverseRecursive(s);
    cout << rev << endl;

    cout << isPalindrome(s, rev);

    return 0;
}