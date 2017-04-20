/*
Brigido Valdovinos
04/20/2017
The program creates user names by given first name and last name. 
It will out put three different choices and will tell the user
if the user name is taken.
*/

#include <iostream>
#include <cstring>
using namespace std;


int main()
{



char firstName[10];
char lastName [20];





cout<< "Enter your first name: "<<endl;
cin>> firstName;


while (strlen(firstName) > 10) 
        {
        
            cout<< "Too many characters, type less than 10."<<endl;
            cin>> firstName;
        }

cout<<"Enter last name: ";
cin>> lastName;
while (strlen(lastName) > 20) 
        {
        
            cout<< "Too many characters, type less than 10."<<endl;
            cin>> lastName;
        }



}