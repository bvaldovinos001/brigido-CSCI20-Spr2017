/* Brigido Valdovinos
   02/23/2017
   THis program generates a random number from 1 to 100.*/
   
#include <iostream>
#include <cmath>
#include <cstdlib>     // Use random.
#include <ctime>      // Use of time.
using namespace std;


int randNum(int GenNum);
int randomNum = 0;
randomNum = ((rand() % 100) + 1);
cout<< RandNum;       /* ((rand() % 100) generates a number 
                                            between 0 and 99. "+ 1" adds one so 
                                            that 0 is not a generated number. */

int main () {
  srand(time(0));  // Used to generate a random number.
cout<< "Your randomly generated number is: ";

randNum(GenNum);


  
}