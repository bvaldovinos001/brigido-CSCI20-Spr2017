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
 

        ScaryMonster oneMonster  ;
    oneMonster.head = "Zombus"   ;
    oneMonster.eyes = "Spritem"  ;
    oneMonster.ears = "Vegitas"  ;
    oneMonster.mouth= "Wackus"   ;      //As instructed to use.
    
        ScaryMonster twoMonster  ;
    twoMonster.head = "Franken"  ;
    twoMonster.eyes = "Vegitas"  ;
    twoMonster.ears = "Wackus"   ;
    twoMonster.mouth= "Vegitas"  ;      //Chosen by programer.
    
        ScaryMonster threeMonster;
    threeMonster.head            ;
    threeMonster.eyes            ;
    threeMonster.ears            ;
    threeMonster.mouth           ;      //Chosen by user.
    
        ScaryMonster fourMonster ;
    fourMonster.head             ;
    fourMonster.eyes             ;
    fourMonster.ears             ;
    fourMonster.mouth            ;      //Chosen by user.
    
 
 // First monster "oneMonster"
 
 cout<<"The first monster's pre-chosen head will be Zombus, "
 "the eyes will be Spritem, the ears will be Vegitas, "
 "and the mouth will be Wackus." <<endl;     

 
 
 // Second monster "twoMonster"
 cout<<"For the second monster, the head will be Franken, "
 "the eyes will be Vegitas, the ears will be Wackus, "
 "and the mouth will be Vegitas." <<endl;    
 
  // Third monster "threeMonster"
 
 cout<<"For the third monster, enter a head:";     
 cin>>threeMonster.head ;
 
 cout<< "Enter eyes:";
 cin>>threeMonster.eyes  ;
 
 cout<< "Enter ears:";
 cin>>threeMonster.ears  ;
 
 cout<< "Enter mouth:";
 cin>>threeMonster.mouth  ;
 
  // Fourth monster "fourMonster"
 
 cout<<"For the fourth monster, enter a head:";     
 cin>>fourMonster.head  ;
 
 cout<< "Enter eyes:"   ;
 cin>>fourMonster.eyes  ;
 
 cout<< "Enter ears:"   ;
 cin>>fourMonster.ears  ;
 
 cout<< "Enter mouth:"  ;
 cin>>fourMonster.mouth ;
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
     <<twoMonster.mouth <<". "<<endl;
     
 cout  //Third monster output.
     <<"Monster Three: "
     <<threeMonster.head  <<", "
     <<threeMonster.eyes  <<", "
     <<threeMonster.ears  <<", "
     <<threeMonster.mouth <<". "<<endl;
     
 cout  //Fourth monster output.
     <<"Monster Four: "
     <<fourMonster.head  <<", "
     <<fourMonster.eyes  <<", "
     <<fourMonster.ears  <<", "
     <<fourMonster.mouth <<". ";
 
 }
