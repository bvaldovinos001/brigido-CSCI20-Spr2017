/*
Brigido Valdovinos
05/04/17
The code has errors and the purpose of the lab is to 
anotate what is wrong and how it works. */


#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;             //stores name length
    char *name = new char[10];          //allocating memory for an array of characters and has the pointer "name" pointing to the memory

    cout << "Please enter a 10 letter word or less" << endl;  // output to the screen
    cin >> name;        // user input
    
    char firststr; // lets you use firstr
    char * head  = name; //pointer variable points to the location of name
    char * tail = name; // pointer variable points to the same location but as tail this time
    nameLength = strlen(name); // it stores how long the name is, its based of the pointer

    cout << "Your word is " << firststr << endl; // outputs the word thats stored in firstr

    if (nameLength<10)
    {
         while (*head != '\0')
         {
                cout << *head; // outputs the pointer head thats deferencefed
                head++; //adding increments to head
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; // if word greater than 10 words this will output
     }

     cout << endl; // outputs a new line

     tail = &name[strlen(name) - 1];    //stores the location of name  in the highest index -1

     if (nameLength < 10) 
     {
          while (tail != name)
          {
                 cout << *tail; // outputs the location of name as stored in tail  but deferenced
                 tail--; // decreasing increment
          }
     }
     cout << endl; // outputs a  new line

     head = name; // head now points to the location of name
     tail = &name[strlen(name) - 1]; //tail is assigned to the location of the index of the name length - 1

     head++;    //increaments head
     tail--;    // decreases tails

     if (*head == *tail) 
     {
         cout << "It is an palindrome!" << endl;    // if head and tail are equal while they are dereferenced it outputs this
     }
     else
     {
         cout << "It is not an palindrome" << endl; //  if head and tail are not equal it outputs this
     }

     return 0; 
}