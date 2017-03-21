/* Brigido Valdovinos
   03/09/2017
   Creating a class for a unit converter.
*/

#include <iostream>
using namespace std;

class unitConverter {


public:
    void SetMiles(double convDist);//Setting miles.
    void SetYards(double convDist);
    void SetFeet( double convDist);
    void SetInches(double convDist);  
    
    double GetMiles();
    double GetYards();
    double GetFeet();
    double GetInches(); 
    
private:
    double Miles;

};
        
        
    void unitConverter::SetMiles(double convDist) {     //Setting miles
        Miles = convDist;   }
    double unitConverter::GetMiles() {      //Getting miles
        return Miles = Miles * 1;   }//Returning
        
    void unitConverter::SetYards(double convDist) {     //Setting yards.
        Miles = convDist;   }
    double unitConverter::GetYards() {      //Getting yards.
        double convYards;
        return convYards = Miles * 1760;   }//Returning
        
        void unitConverter::SetFeet(double convDist) {      //Setting feet.
        Miles = convDist;   }
    double unitConverter::GetFeet() {   //Getting feet
        double convFeet;
        return convFeet = Miles * 5280;   }//Returning
    
        void unitConverter::SetInches(double convDist) {
        Miles = convDist;   }
    double unitConverter::GetInches() {
        double convInches;
        return convInches = Miles * 63360;   }//Returning
    
int main() {
    
    double initialDist;
    
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