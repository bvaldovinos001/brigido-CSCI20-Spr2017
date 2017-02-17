/* Brigido Valdovinos
   02/16/2017
   This program is to create a monster struct with different characteristics
   and seperate peices.
*/
 #include <iostream>
 #include <string>
 using namespace std;
 struct ScaryMonster {
    string  head;
    string  eyes;
    string  ears;
    string mouth;
    
 };
 int main() {
 

        ScaryMonster oneMonster;
    oneMonster.head    ;
    oneMonster.eyes     ;
    oneMonster.ears     ;
    oneMonster.mouth   ;
    
        ScaryMonster twoMonster;
    twoMonster.head     ;
    twoMonster.eyes    ;
    twoMonster.ears     ;
    twoMonster.mouth  ;
    
 
 // First monster "oneMonster"
 
 cout<<"For the first monster, enter a head:";     
 cin>> oneMonster.head ;
 
 cout<< "Enter eyes:";
 cin>>oneMonster.eyes  ;
 
 cout<< "Enter ears:";
 cin>>oneMonster.ears  ;
 
 cout<< "Enter mouth:";
 cin>>oneMonster.mouth  ;
 
 
 // Second monster "twoMonster"
 cout<<"For the second monster, enter a head:";     
 cin>> twoMonster.head ;
 
 cout<< "Enter eyes:";
 cin>> twoMonster.eyes  ;
 
 cout<< "Enter ears:";
 cin>> twoMonster.ears  ;
 
 cout<< "Enter mouth:";
 cin>> twoMonster.mouth ;
 cout<<endl;
 
 cout  //First monster output.
     <<"Monster One: "
     <<oneMonster.head  <<", "
     <<oneMonster.eyes  <<", "
     <<oneMonster.ears  <<", "
     <<oneMonster.mouth <<". "<<endl;
     
 cout  //Second monster output.
     <<"Monster Two: "
     <<twoMonster.head  <<", "
     <<twoMonster.eyes  <<", "
     <<twoMonster.ears  <<", "
     <<twoMonster.mouth <<". ";
 
 }
