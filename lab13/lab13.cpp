/* Brigido Valdovinos
   02/02/2017
   U.S. Population Estimator
   */
 #include <iostream>
 using namespace std;
 int main() {
  int oneBirth = 8;
  int oneDeath = 11;
  int oneMigrant = 29;
  int netGain = 15;  //Not used. Yearly net gain calculated.
  int currentPopulation = 324473105;
  int netGainPerYear = 0;
  int futurePopulation = 0;
  int futureYear = 0;
  int yearsPassed = 0;
    cout<< "To estimate the population of the U.S. for a future year, input a year to estimate:";
    cin >> futureYear ;
  
    yearsPassed = futureYear - 2017; // How many years from now the chosen year is.
    netGainPerYear = ((60/oneBirth)*60*24*365) + ((60/oneMigrant)*60*24*365) - ((60/oneDeath)*60*24*365);
    //Births a year plus migrants per year, minus deaths per year. 
    futurePopulation = currentPopulation + (netGainPerYear*yearsPassed);
    //Future population = population in 2017 plus the yearly growth of the population until chosen year.
    cout << "The population of the U.S. in the year ";
    cout << futureYear; cout <<" will be "; cout << futurePopulation;
 }