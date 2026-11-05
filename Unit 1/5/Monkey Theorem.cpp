#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

char generateRandomLetter(){
    string set = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char randomLetter = set[rand() % set.length()];
    return randomLetter;
}

void matchCharacters(string str1, string str2, bool* matchArray){
    for(int i = 0; i < str1.length(); i++){
        if(str1[i] == str2[i]){
            matchArray[i] = true;
        }
        else{
            matchArray[i] = false;
        }
    }
}

int main(){
    srand(time(0));
    string targetString;
    cout << "Enter string you want the monkey to type (only lower and upper case letters): " << endl;
    getline(cin, targetString);
    int attempts = 0;
    string monkeyInput = "";

    //create array that reflects if each character matches the target string or not
    bool* matchArray = new bool[targetString.length()];

    //initialize the first random string
    for(int i = 0; i < targetString.length(); i++){
        monkeyInput.push_back(generateRandomLetter());
    }

    //hill-climb algo
    while(monkeyInput != targetString){
        cout << "Attempt " << attempts << ": " << monkeyInput << endl;
        //get the match array for the monkey's current string
        matchCharacters(monkeyInput, targetString, matchArray);

        for(int i = 0; i < targetString.length(); i++){
            if(!matchArray[i]){
                monkeyInput[i] = generateRandomLetter();
            }
        }
        attempts++;
        if(attempts % 100 == 0){
            //cout << "Attempt " << attempts << ": " << monkeyInput << endl;
        }
        
    }
    cout << "Monkey successfully typed the target string: " << monkeyInput << endl;
    cout << "Total attempts: " << attempts << endl;
    delete[] matchArray;
    return 0;
}