/*
Brigido Valdovinos
04/13/17
This program is a simulator for a store inventory managment system. 
It keeps track of inventory, purchases, price.
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
    
    
    

int     itemInventory[10] = {   1,      2,      3,      4,      5,      6,      7,      8,      9,      10};
int itemPrice[10]         = {   2,      1,      2,      1,      3,      2,      4,     10,     20,      18};


const int numItems = 10;
int userChoice[numItems];


cout<< "Choose what you would like to purchase."<<endl;
        for(int count = 0; count <10; count++)
            
                cout<< itemInventory [count] << " costs $" <<itemPrice[count] <<"." <<endl;
                

}

//"Paper", "Pencil", "Pen", "Eraser", "Notebook", "Marker", "scissor", "Book", "Backpack", "Calculator"

/*
This program mimics an online shopping cart.  You are the proprietor of an online shop
and have to keep track of inventory, price and the user’s shopping cart.  Create a menu 
of at least 10 items for the user to choose from.  Identify your starting inventory and price.  
As the user purchases an item, you should remove that item from inventory (subtract 1) and add
the price to a total.  When the user is done adding items to their cart, you should output a 
statement of what they have ordered and the total cost of their purchases.  Do not allow you 
inventory to go below 0.
*/