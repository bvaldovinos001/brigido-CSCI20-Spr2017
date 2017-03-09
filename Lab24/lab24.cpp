/* Brigido Valdovinos
   02/28/2017
   This program creates a random number between two chosen limits,
   the limits being chosen by the user. 
   Then number generated is converted to kilograms, then to pounds.*/
   
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
    return randomNum;       //Random number is sent back into main to #1 and becomes "initialLbs".
}

double weightConvKg(int initialLbs){    /*"initialLbs" is the random number and its sent up from the main 
                                            to be converted into kilograms */
    
    double Kilos = 0;
        Kilos = initialLbs * .454; //Taking pounds and converting to kilograms.
        return Kilos;               //Kilograms are sent back to main into funtion #2 
} 

double weightConvLbs(double weightInKg){
    double Pounds = 0;
        Pounds = weightInKg * 2.20;         //Kilograms are converted back into punds.
        return Pounds;                      //Pounds are sent back to main into #3
    
}
      int main(){
      
      int numX = 0;
      int numY = 0;
      int initialLbs = 0;
      double weightLbs = 0;
      double weightKg = 0;
      double weightInKg = 0;
      double weightInLbs = 0;
      
      cout<<"Enter lower number:"<<endl;
       cin>>numX;
       cout<<"Enter upper number:"<<endl;
       cin>>numY;
       cout<<endl<< "The randomly generated number is: ";
       
       initialLbs = randNum(numX, numY);        //#1. Input from user is sent to random # generator.
       cout<< initialLbs<<endl;                 //Random # is returned.
       
      weightInKg = weightConvKg(initialLbs);    //#2. Pounds (random #) are sent to be converted into kg.
       cout<<initialLbs<< " pounds converted into kilograms is ";
       cout<< weightInKg<<" kilograms"<<endl;       //Weight in kilograms are returned.
       
      weightInLbs = weightConvLbs(weightInKg);  //#3. Kilograms are sent to function to be converted back to pounds.
       cout<<weightInKg<< " kilograms converted into pounds is ";
       cout<<weightInLbs<<" pounds"<<endl;      //Weight in pounds are returned.
       
         cout<< initialLbs<<"lbs = "<<weightInLbs<<"lbs";   //Comparing pound values.
      }