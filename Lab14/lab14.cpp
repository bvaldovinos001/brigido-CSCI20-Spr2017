/* Brigido Valdovinos
   02/07/2017
   The program calculates how many of each coin is inserted into the machine given a certain amount of money.
   */
 #include <iostream>
 using namespace std;
 int main() {  
  int numQuarters    = 0; // Amount of these coins inserted.
  int numDimes       = 0; // Amount of these coins inserted.
  int numNickles     = 0; // Amount of these coins inserted.
  int numPennies     = 0; // Amount of these coins inserted.
  double percFee       =10.90; // Fee the machine charges.
  int totCentsIn  = 0; // Amount entered before fee.
  double totDollarsOut = 0.00; // Total after the fee.
  double centToDollar = 100.0; //To conver cents to dollars. 
  
  cout<<"Enter your change to be sorted:";
  cin>>totCentsIn;
  cout<< "You have entered "<<totCentsIn<<" cents."<<endl;

 numQuarters = (totCentsIn/25);             //Next four lines are to calculate how many coins of each and their remainders(modulos)
 numDimes = (totCentsIn%25)/10;
 numNickles = ((totCentsIn%25)%10)/5;
 numPennies = (((totCentsIn%25)%10)%5);
  
 cout<<numQuarters <<" Quarters "<<endl;
 cout<< numDimes <<" Dimes "<<endl;
 cout<< numNickles << " Nickles "<<endl;
 cout<< numPennies << " Pennies"<<endl; 
 
 totDollarsOut = (totCentsIn/centToDollar) - ((totCentsIn/centToDollar)*(percFee/centToDollar)); //totDollarsOut = money in - percentage
 
 cout<< "The total you entered was $"<<(totCentsIn/centToDollar)<<"."<<endl;
 cout<<"After a 10.9% service fee the total you receive is $"<<totDollarsOut <<".";
 }