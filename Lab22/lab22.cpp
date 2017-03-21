/* Brigido Valdovinos
   02/23/2017
   THis program generates a random number from 1 to 100.*/
   
#include <iostream>
#include <cmath>
#include <cstdlib>     // Use random.
#include <ctime>      // Use of time.
using namespace std;



int RandomNumber () {
srand(time(0)); //This allows me to apply an rng to my code

cout << "Your randomly generated number between 0 and 100 is " << (rand() % 101) +1 << endl; // this is my function


}





int main () {
RandomNumber(); //this will call my function









} 