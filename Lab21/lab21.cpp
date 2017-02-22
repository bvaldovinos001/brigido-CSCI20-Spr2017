/* Brigido Valdovinos
   02/21/2017
   The program is to output information about windchills 
   based on inputed temperature and wind speed.
*/
 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main() {

double velocity;
double tempF;
double oldStyleWindChill;
double newStyleWindChill;
double chillDifference;
double sqrtVelocity;
double powVelocity;

cout<< "Enter temperature (in Fahrenheit):";
cin>> tempF;
cout<< "Enter wind speed:";
cin>> velocity;

sqrtVelocity = sqrt(velocity);
powVelocity  = pow(velocity, 0.16);

oldStyleWindChill=0.081*(3.71 * sqrtVelocity + 5.81 - 0.25 * velocity)*(tempF- 91.4) + 91.4;
newStyleWindChill=35.74+(0.6215*tempF)-(35.75*powVelocity)+(0.4275*tempF*powVelocity);
chillDifference=abs (oldStyleWindChill - newStyleWindChill);



cout<<"     Wind Speed      Old Formula     New Formula     Difference"<<endl;
cout<<"         "<<velocity<< "           "<<oldStyleWindChill <<"          "<<newStyleWindChill <<"          "<<chillDifference;



 }