#include <iostream>
 #include <string>
 using namespace std;
 struct EmployeeData{
     string empName;
     double hrlyRate;
     double hrsWeek;
 };
     
 int main() { 
 
 EmployeeData employeeInfo;
 
    employeeInfo.empName = empName;
    employeeInfo.hrlyRate = hourlyRate;
    employeeInfo.hrsWeek = hoursWeek;
    
    grossIncome = (hoursWeek)*(hourlyRate);  //Weekly income before deductions.
    netIncome = (grossIncome - hlthInsurance)*taxDeduct; /* Weekly income after deductions. 
                                                            Health insurance deducted, the remainder was taxed at 17% */
    
    
    
    
    
    
    cout<< employeeInfo.empName <<" earned a gross amount of $"<<grossIncome<<" for working "<<employeeInfo.hrsWeek<<" hours this week, at an hourly rate of $"<<employeeInfo.hrlyRate<< " per hour."<<endl;
    cout<< "However, after deductions, the net income earned is $" <<netIncome<<endl;
 }