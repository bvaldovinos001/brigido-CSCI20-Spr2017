/*
Brigido Valdovinos
04/25/2017
The program creates user names by given first name and last name using strings. 
It will out put three different choices and will tell the user
if the name and last name are the same.
*/

#include <iostream>
#include <string>  //Enables use of string functions.
using namespace std;

int main() {
    
    string firstName;
    string lastName;

//FIRST NAME
    cout<< "Enter first name: ";
    cin>> firstName;
              
            while (firstName.length() > 10) //If name is longer than 10 characters.
                {
                    cout<< "Too many characters, type less than 10."<<endl;
                    cin>> firstName;
                }

//LAST NAME
    cout<<"Enter last name: ";
    cin>> lastName;  

            while ( firstName == lastName ) //Checking if names are the same.
                {
                    cout<< "First and last name are the same, re-enter last name: "<<endl;
                    cin>>lastName;
                 
                        while (lastName.length() > 20) //If last name is longer than 20 characters.
                            {   cout<< "Too many characters, type less than 10."<<endl;
                                cin>> lastName;
                            }             
                }

cout<<endl << "Name: "<<firstName<<" "<<lastName<<endl;// cout first and last name.
cout<< "Which user name would you like? "<<endl;

cout<< firstName[0] << lastName << endl;    //First username.
cout<< firstName[0] << firstName[1] << lastName << endl;//Second username
cout<< firstName << lastName << endl;    //Third username.
}
