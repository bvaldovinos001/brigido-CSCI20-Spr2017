/*
Brigido Valdovinos
04/27/2017
The program reads data from a file, which
contains student school data, then calculates
their GPA and outputs it in a different file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   string lines;
   ifstream fin;
   ofstream fout;
   
cout<<"To open a grade file, enter grades.txt"<<endl;
cin>> lines;
   
   
   fin.open(lines);  //Opening input file
   fout.open("grades.html"); //Opening output file


            if(!fin.is_open())   //If user inputs a file that doesnt exist
            {
                cout << "The file couldn't be opened, try a different file name." << endl;
                cin >> lines;
                fin.open(lines);    
            }

            
            if(fin.is_open() && fout.is_open())    //If user inputs a file that exists
            {
                while(getline(fin,lines)) {
                    fout << lines << endl;
                }
}

fout.close();  //Closing the input file
fin.close();   //Closing the output file

}