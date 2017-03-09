/* Brigido Valdovinos
   02/28/2017
   This program creates a random number between two chosen limits,
   the limits being chosen by the user. */
   
    #include <iostream>
    #include <cstdlib>    
    #include <ctime>
   using namespace std;
   
 int SwapNum( int numX, int numY, int& newNumX, int& newNumY) { //This will swap parameters.
        newNumX = numY;
        newNumY = numX;
            }
int randNum(int numX, int numY){        //Integers sent from the main.
    int newNumY = 0;
    int newNumX = 0;
    int randomNum = 0;
    SwapNum(numX, numY, newNumX, newNumY); //Function used to swap between parameters. numX and numY are sent up to be swapped.
    srand(time(0));                             //Generates a new number every time.
    randomNum = (rand()% (newNumX - newNumY)) + newNumY;    //Number generator.
    
   return randomNum;    //Returning the number back to the main to output.
}
      int main(){
      
      int numX = 0;
      int numY = 0;
      int finalOut = 0;
      
      cout<<"Enter lower number:"<<endl;
       cin>>numX;
       cout<<"Enter upper number:"<<endl;
       cin>>numY;
       cout<< "The randomly generated number between "<<numX
       <<" and "<<numY<<" is: ";
       
       finalOut = randNum(numX, numY);  //Input from user is sent to the number generator.
        
        cout<< finalOut;
          
      }