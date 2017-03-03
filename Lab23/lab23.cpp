/* Brigido Valdovinos
   02/28/2017
   This program creates a random number between two chosen limits,
   the limits being chosen by the user. */
   
    #include <iostream>
    #include <cmath>
    #include <cstdlib>    
    #include <ctime>
   using namespace std;
   
 int SwapNum( int numX, int numY, int& newNumX, int& newNumY) {
        newNumX = numY;
        newNumY = numX;
            }
int randNum(int numX, int numY){
    int newNumY = 0;
    int newNumX = 0;
    int randomNum = 0;
    SwapNum(numX, numY, newNumX, newNumY);
    srand(time(0));
    randomNum = (rand()% (newNumX - newNumY)) + newNumY;
    
   cout<< randomNum;
}
      int main(){
      
      int numX = 0;
      int numY = 0;
      
      
      cout<<"Enter lower number:"<<endl;
       cin>>numX;
       cout<<"Enter upper number:"<<endl;
       cin>>numY;
       cout<< "The randomly generated number is: ";
       
       randNum(numX, numY);

          
      }