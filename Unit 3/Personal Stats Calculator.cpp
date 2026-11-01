#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    // Declare variables
    string name;
    int age;
    double height, weight;
    
    // Get user input
    cout << "What is your name? \n";
    getline(cin, name);
    
    cout << "How old are you? \n";
    cin >> age;
    
    cout << "What is your height in inches? \n";
    cin >> height;
    
    cout << "What is your weight in pounds? \n";
    cin >> weight;
    
    // TODO: Calculate BMI
    double bmi;
    bmi = std::round((weight * 703) / (std::pow(height,2))*10.0)/10.0;

    string classification;
    if(bmi < 16){
      classification = "Severe Thinness";
    } 
    else if(bmi <= 17){
      classification = "Moderate Thinness";
    }
    else if(bmi <= 18.5){
      classification = "Mild Thinness";
    }
    else if(bmi <= 25){
      classification = "Normal";
    }
    else if(bmi <= 30){
      classification = "Overweight";
    }
    else if(bmi <= 35){
      classification = "Obese class I";
    }
    else if(bmi <= 40){
      classification = "Obese class II";
    }
    else if(bmi > 40){
      classification = "Obese class III";
    }
    // TODO: Determine age category
    string category;
    if(age < 13){
      category = "Child";
    }else if (age < 20){
      category = "Teen";
    }else{
      category = "Adult";
    }
    
    // TODO: Display formatted report
    cout << "=== PERSONAL STATS REPORT ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " (" << category << ")\n";
    cout << "Height: " << height << " inches\n";
    cout << "Weight: " << weight << " pounds\n";
    cout << fixed << setprecision(1);
    cout << "BMI: " << bmi << endl;
    cout << "Classification: " << classification << endl;
    cout << "===================================";
    
    
    return 0;
}
