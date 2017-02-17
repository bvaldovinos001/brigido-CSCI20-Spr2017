/* Brigido Valdovinos
   02/15/2017
   This program is a wage calculator based on hourly wage and weekly hours.
   It calculates net and gross amounts, taxes and deductions.
*/
 #include <iostream>
 #include <string>
 using namespace std;
 struct EmployeeData{
     string empName;
     int hrlyRate;
     int hrsWeek;
 };
     
 int main() { 
     string empName;
     double hourlyRate      =0.0;
     double hoursWeek       =0.0;
     double netIncome       =0.0;
     double grossIncome     =0.0;
     int hlthInsurance      =130;
     double taxDeduct       =.83;

 EmployeeData employeeInfo;
 
 
    cout<< "Enter your name:"<<endl;
    getline (cin,empName);
    cout<< "Enter hourly rate:"<<endl;
    cin>> hourlyRate;
    cout<< "Enter hours worked per week:"<<endl;
    cin>> hoursWeek;
    
    
     
    employeeInfo.empName = empName;
    employeeInfo.hrlyRate = hourlyRate;
    employeeInfo.hrsWeek = hoursWeek;
    
    grossIncome = (hoursWeek)*(hourlyRate);  //Weekly income before deductions.
    netIncome = (grossIncome - hlthInsurance)*taxDeduct; /* Weekly income after deductions. 
                                                            Health insurance deducted, the remainder was taxed at 17% */
    
    
    
    
    
    
    cout<< employeeInfo.empName <<" earned a gross amount of $"<<grossIncome<<" for working "<<employeeInfo.hrsWeek<<" hours this week, at an hourly rate of $"<<employeeInfo.hrlyRate<< " per hour."<<endl;
    cout<< "However, after deductions, the net income earned is $" <<netIncome<<endl;
 }