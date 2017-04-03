/*
Brigido Valdovinos
03/30/2017
Program will make a number guessing game.
If user guesse lower, then ask to guess higher, and vice versa.
*/

#include <iostream>
#include <cstdlib>     // Use random.
#include <ctime>      // Use of time.
using namespace std;


int main(){
    
    int userNum;
    int randNum;
    int userTrial=1;
    int userTrial2=0;
        cout<<"Enter a number between 1 and 50:"<<endl;
        
        
srand(time(0)); // Random number.
randNum =((rand() % 50) +1);//Random from 1-50.

for(userTrial=1; userTrial++;){
   
}        
        
while(userNum!=randNum)         { //while loop and conditions
    cin>>userNum;
   

    
    
if (userNum > 50){
    cout<<"Enter valid number."<<endl;  }    
    
if (userNum < 0){
    cout<<"Enter valid number."<<endl;  }        



    
if (userNum < randNum){     //If number too low
    cout<< "Guess higher."<<endl;            }
    
if (userNum > randNum){     //If number too high
    cout<< "Guess lower."<<endl;    }

else {
    userNum == randNum;     ////If number correct   

}
                                           }
cout<<endl <<userNum<< "! Winner!";



    cout<<endl<<"It took "<<userTrial2<<" tries";

}