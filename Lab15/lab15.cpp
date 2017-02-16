/* Brigido Valdovinos
   02/09/2017
   This program is a simple mad lib program that implements at least five variables.
*/
 #include <iostream>
 #include <string>
 using namespace std;
 int main() { 
     string     oneName;
     string oneAdjective;
     string     oneNoun;
     string     oneVerb;
     string   twoVerb;

cout<<"Insert a character name:" <<endl;
cin>> oneName;
cout<<"Insert an adjective (describes):" <<endl;
cin>> oneAdjective;
cout<< "Insert a noun (place/thing):"<<endl;
cin>> oneNoun;
cout<< "Insert a verb (action ending in -ing)"<<endl;
cin>> oneVerb;
cout<< "Insert another verb (in past tense)" <<endl;
cin>> twoVerb;

cout<<"There was once a little boy named "<<oneName<<". ";
cout<<"He really liked "<<oneVerb <<" in rain puddles and playing in the rain. ";
cout<<"One "<<oneAdjective<<" day, however, he went outside to happily play in the rain. ";
cout<<"When he jumped in a puddle, he "<<twoVerb<<".";
cout<<"The puddle was so deep that he came out "<<oneNoun;
cout<<" and he never jumped in a puddle again. ";

 }