/*
Brigido Valdovinos
03/28/17
The program will calculate the amount of income tax
that's taken out of a person/couple and how much they
need to be charged or refunded.
*/

#include <iostream>
#include <string>
using namespace std;


int main(){
    string Name;
    int filingStatus = 1;
    
    
    
//SINGLE
const double grossIncomeLvl1 = .10; // AGI from $0-$8,925
const double grossIncomeLvl2 = 892.50+.15; //AGI from $8,926-$36,250
const double grossIncomeLvl3 = 4991.25 + .25; //AGI from $36,251 - $87,850
const double grossIncomeLvl4 = 17891.25 + .28; //AGI from $87,851 and above

//COUPLES
const double coupleIncomeLvl1 = .10; // $0-$17,850
const double coupleIncomeLvl2 = 1785 + .15; // $17,851-$$72,500
const double coupleIncomeLvl3 = 9982.50 + .28; // $72,501 and above

cout<< "Enter your name: ";
getline(cin,Name);
cout<< "If you're single, enter 1. If you're married, enter 2. ";
cin>> filingStatus;


}