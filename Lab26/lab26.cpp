/* Brigido Valdovinos
   03/09/2017
   
*/

#include <iostream>
#include <string>
using namespace std;

class TemperatureConverter 
{
    public:
        void SetTempFromKelvin(double kelvinTemp);
        double GetTempFromKelvin() const;
    
    private:
    double kelvin_;
};
    void TemperatureConverter::SetTempFromKelvin(double kelvinTemp){
    kelvin_ = 0;
        kelvin_ = kelvinTemp;
    }
    
    double TemperatureConverter::GetTempFromKelvin()const {
    TempInCel = 
    return kelvin_;
    }

int main(){
   
    TemperatureConverter temp1; //testing default constructor
    
    temp1.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<kelvin_;
}