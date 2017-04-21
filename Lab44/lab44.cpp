/*
Brigido Valdovinos
04/20/2017
The program creates user names by given first name and last name. 
It will out put three different choices and will tell the user
if the user name is taken.
*/

#include <iostream>
#include <cstring>  //Enables use of string functions.
#include <cctype>
using namespace std;


int main()
{

char firstName[10];
char lastName [20];


    cout<< "Enter first name: ";
    cin>> firstName;
              
            while (strlen(firstName) > 10) //If name is longer than 10 characters.
                {
                    cout<< "Too many characters, type less than 10."<<endl;
                    cin>> firstName;
                }


    cout<<"Enter last name: ";
    cin>> lastName;  

            while (strlen(lastName) > 20) //If last name is longer than 20 characters.
                {
                    cout<< "Too many characters, type less than 10."<<endl;
                    cin>> lastName;
                }


            if( strcmp(firstName,lastName) == 0 ) //Checking if names are the same.
                {
                    cout<< "First and last name are the same, re-enter last name: "<<endl;
                    cin>>lastName;
                }





cout<<endl << "Name: "<<firstName<<" "<<lastName<<endl;
cout<< "Which user name would you like? "<<endl;

cout<< firstName[0] << lastName << endl;
cout<< firstName[0] << firstName[1] << lastName << endl;
cout<< firstName << lastName << endl;    
}



/*
    Trying to change the character from upper to lower case.
int i = 0;
char c;

c=firstName[i];
    putchar (tolower(c));

*/