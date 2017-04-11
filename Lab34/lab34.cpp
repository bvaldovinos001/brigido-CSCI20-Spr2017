/*
Brigido Valdovinos
04/04/17
I was given a program with bugs and my objective is to fix
the program by a series of techniwues.
*/




/*
Sum of numbers 
Write a program that reads in positive integers from the user, 
each separated by a space, and the whole terminated by a negative 
number (e.g. 3 22 10 -2),and outputs the sum of the numbers entered 
(not including the terminated negative number!).*/

#include <iostream>
using namespace std; 

int main(){
        // initialization
        int num;
        int sum=0;
        cout << "Enter numbers separated by spaces and terminated with a negative number." << endl;
         // read first number
        cin >> num;
         while (num >= 0)
  {
               // add in to the sum
               sum = sum + num;
                // read in next number (getting ready for next loop test)
               cin >> num;
        }
                cout << "Sum was " << sum << endl;
                return 0;
}

/*
I first read through the program, not really looking for anything to fix, just looking at what it was.
Before I ran the program, I looked for easy and obvious mistakes like missing semicolons, closed brackets, etc… 
There were a lot of very unnessesary characters, like asterisks and white space; it made the program cluttered.
The program had no end. Then I looked for the reason why the loop did not end.
I noticed that the numbers weren't actually being added and changed num = ... to sum = ...
The fist input was a number, but the second input was sending that number back to the sum so I changed it to 
num so that it would continue the loop.
*/