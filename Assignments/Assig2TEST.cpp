/* Brigido Valdovinos
   03/09/2017
   Creating a class for a unit converter.
*/

#include <iostream>
using namespace std;

class unitConverter {


public:
    void SetDist(double convDist);
/*   void SetMiles(double convDist);
    void SetYards(double convDist);
    void SetFeet( double convDist);
    void SetInches(double convDist);    */
    
    double GetDist () ;    
/*  double GetMiles(double convDist);
    double GetYards(double convDist);
    double GetFeet( double convDist);
    double GetInches(double convDist);  */
    
private:
    double Dist;   
    
};
    
    void unitConverter::SetDist(double convDist){
        Dist = convDist; 
         }
    double unitConverter::GetDist() {
        return Dist = Dist * 1760;
    
    }
int main() {
    
    double initialDist;
    
    cin>> initialDist;
    
    unitConverter distIn;
    
    distIn.SetDist(initialDist);
/*    distIn.SetMiles();
    distIn.SetYards();
    distIn.SetFeet();
    distIn.SetInches();     */
    cout<< distIn.GetDist();
    
}