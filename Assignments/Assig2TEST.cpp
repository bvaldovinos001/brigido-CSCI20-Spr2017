/* Brigido Valdovinos
   03/09/2017
   Creating a class for a unit converter.
*/

#include <iostream>
using namespace std;

class unitConverter {


public:
    void SetMiles (double convDist);
    void SetYards (double convDist);
    void SetFeet  (double convDist);
    void SetInches(double convDist);  
    
    double GetMiles ();
    double GetYards ();
    double GetFeet  ();
    double GetInches(); 
    
private:
    double Miles ;
    double Yards ;
    double Feet  ;
    double Inches;
};
        
        
    void unitConverter::SetMiles(double convDist) {
        Miles = convDist;   }
    double unitConverter::GetMiles() {
        return Miles = Miles * 1;   }
        
    void unitConverter::SetYards(double convDist) {
        Yards = convDist;   }
    double unitConverter::GetYards() {
        return Yards = Yards * 1760;   }
        
    void unitConverter::SetFeet(double convDist) {
        Feet = convDist;   }
    double unitConverter::GetFeet() {
        return Feet = Feet * 5280;   }
    
    void unitConverter::SetInches(double convDist) {
        Inches = convDist;   }
    double unitConverter::GetInches() {
        return Inches = Inches * 63360;   }
    
int main() {
    
    double initialDist  ;
    double initialMiles ;
    double initialYards ;
    double intialFeet   ;
    double initialInches;
    
    cin>> initialDist;
    cout<<endl;
    
    
    
    unitConverter distIn;
    
    distIn.SetMiles(initialDist);
    distIn.SetYards(initialDist);
    distIn.SetFeet(initialDist);
    distIn.SetInches(initialDist);    
    
    cout<< distIn.GetMiles()<<" miles"<<endl;
    cout<< distIn.GetYards()<< " yards"<<endl;
    cout<< distIn.GetFeet()<<" feet"<<endl;
    cout<< distIn.GetInches()<<" inches"<<endl;
    
}