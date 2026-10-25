#include <iostream>
using namespace std;

int main() {
    double dueMoney;
    double paidMoney;
    cout << "Bill Total: $";
    cin >> dueMoney;
    cout << "Customer Tender: $";
    cin >> paidMoney;
    double change = paidMoney - dueMoney;

    //calculate change with modulus
    cout << "Change is:" << endl;
    if(change < 0){
        cout << "Insufficient tender" << endl;
        return 0;
    }else if(change == 0){
        cout << "no change" << endl;
        return 0;
    }else{
        int changeInCents = static_cast<int>(change * 100);
        //round to nearest nickel
        if(changeInCents % 5 >= 3){
            changeInCents += (5 - (changeInCents % 5));
        }else{
            changeInCents -= (changeInCents % 5);
        }
        if(changeInCents >= 100){
            int dollars = changeInCents / 100;
            changeInCents %= 100;
            cout << dollars << (dollars != 1 ? " Dollars" : " Dollar") << endl;
        }
        if(changeInCents >= 25){
            int quarters = changeInCents / 25;
            changeInCents %= 25;
            cout << quarters << (quarters != 1 ? " Quarters" : " Quarter") << endl;
        }
        if(changeInCents >= 10){
            int dimes = changeInCents / 10;
            changeInCents %= 10;
            cout << dimes << (dimes != 1 ? " Dimes" : " Dime") << endl;
        }
        if(changeInCents >= 5){
            int nickels = changeInCents / 5;
            changeInCents %= 5;
            cout << nickels << (nickels != 1 ? " Nickels" : " Nickel") << endl;
        }
    }

}