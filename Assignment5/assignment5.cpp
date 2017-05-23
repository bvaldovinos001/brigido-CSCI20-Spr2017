/*
Brigido Valdovinos
Miguel Rosales
05/23/17
This program will tell the user what their Chinese zodiac sign is, depending on their birth year.
Then it will ask them questions to determine what sign they are, according to their personality.
*/



#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
using namespace std;

class UserInfo{
 private:
        string Name_;
        int Birthday_;
        int points_;
    
 public:
        
        
        
        void setName(string x,int y){
            Name_ = x;
            Birthday_ = y;
            cout << "Enter your name: " << endl;
            getline(cin,Name_);
        
            cout << "Enter the year you were born: " << endl;
            cin >> Birthday_;
        }
    
        
        
        string getName(){
            return Name_;
        }

        int getBirthday(){
            return Birthday_;
        }
    
    
};

int main() {

 
    cout << "We're going to see what Chinese zodiac animal you are, that's determined by the year you were born." << endl;
    cout << endl;
    
 
 
 
string name;
int birthday;
string animals;
string birthdayAnimal;
int points[12] = {0,0,0,0,0,0,0,0,0,0,0,0};   // Rat[0] , Ox [1] , Tiger[2], Rabbit[3] , Dragon[4], Snake[5], Horse [6], Goat[7], Monkey[8], Rooster[9], Dog[10], Pig[11]
int Input;

int Rat[] = {1900, 1912, 1924, 1936, 1948, 1960, 1972, 1984, 1996, 2008}; //Arrays that will determined the animal according to the birth year.
int Ox[] = {1901, 1913, 1925, 1937, 1949, 1961, 1973, 1985, 1997, 2009};
int Tiger[] = {1902, 1914, 1926, 1938, 1950, 1962, 1974, 1986, 1998, 2010};
int Rabbit[] = {1903, 1915, 1927, 1939, 1951, 1963, 1975, 1987, 1999, 2011};
int Dragon[] = {1904, 1916, 1928, 1940, 1952, 1964, 1976, 1988, 2000, 2012};
int Snake[] = {1905, 1917, 1929, 1941, 1953, 1965, 1977, 1989, 2001, 2013};
int Horse[] = {1906, 1918, 1930, 1942, 1954, 1966, 1978, 1990, 2002, 2014};
int Goat[] = {1907, 1919, 1931, 1943, 1955, 1967, 1979, 1991, 2003, 2015};
int Monkey[] = {1908, 1920, 1932, 1944, 1956, 1968, 1980, 1992, 2004, 2016};
int Rooster[] = {1909, 1921, 1933, 1945, 1957, 1969, 1981, 1993, 2005, 2017};
int Dog[] = {1910, 1922, 1934, 1946, 1958, 1970, 1982, 1994, 2006, 2018};
int Pig[] = {1911, 1923, 1935, 1947, 1959, 1971, 1983, 1995, 2007, 2019};


int Rat_ = points[0];     //  Arrays to keep track of the points
int Ox_ = points[1];
int Tiger_ = points[2];
int Rabbit_ = points[3];
int Dragon_ = points[4];
int Snake_ = points[5];
int Horse_ = points[6];
int Goat_ = points[7];
int Monkey_ = points[8];
int Rooster_ = points[9];
int Dog_ = points[10];
int Pig_ = points[11];


string Rats;
string Oxs;
string Tigers;
string Rabbits;
string Dragons;
string Snakes;
string Horses;
string Goats;
string Monkeys;
string Roosters;
string Dogs;
string Pigs;


UserInfo User;

User.setName(name,birthday);

ifstream Fin("animals.txt");    //inputting the file with the animal names
ofstream Fout("Result.txt");



cout << "These are the animals that might be your Chinese zodiac sign:" << endl;




if (Fin.good()) {
    getline(Fin,animals);
    
    cout << animals << endl;

}    

cout << endl;

if(User.getBirthday() >= 1900 && User.getBirthday() < 2020){

    
}
else {
    cout << "noooooooo" << endl;
}

for (int i = 0; i < 10; i++){
    
    if (Rat[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Rat." << endl;
            birthdayAnimal = "Rat";
        
    }
}

for (int i = 0; i < 10; i++){
    
    if (Ox[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Ox." << endl;
            birthdayAnimal = "Ox";
        
    }
}    
    
for (int i = 0; i < 10; i++){
    
    if (Tiger[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Tiger." << endl;
            birthdayAnimal = "Tiger";
        
    }
}    

for(int i = 0; i < 10; i++){
    
    if (Rabbit[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Rabbit." << endl;
            birthdayAnimal = "Rabbit";
        
    }
}
    
for(int i = 0; i < 10; i++){
    
    if (Dragon[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Dragon." << endl;
            birthdayAnimal = "Dragon";
        
    }
} 

for(int i = 0; i < 10; i++){
    
    if (Snake[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Snake." << endl;
            birthdayAnimal = "Snake";
        
    }
}    
    
    
for(int i = 0; i < 10; i++){
    
    if (Horse[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Horse." << endl;
            birthdayAnimal = "Horse";
        
    }
}    

for(int i = 0; i < 10; i++){
    
    if (Goat[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Goat." << endl;
            birthdayAnimal = "Goat";
        
    }
}    
    
for(int i = 0; i < 10; i++){
    
    if (Monkey[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Monkey." << endl;
            birthdayAnimal = "Monkey";
        
    }
}    
    
for(int i = 0; i < 10; i++){
    
    if (Rooster[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Rooster." << endl;
            birthdayAnimal = "Rooster";
        
    }
}    
    
for(int i = 0; i < 10; i++){
    
    if (Dog[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Dog." << endl;
            birthdayAnimal = "Dog";
        
    }
}    
    
for(int i = 0; i < 10; i++){
    
    if (Pig[i] == User.getBirthday()){
        cout << "Your Chinese new year animal is a Pig." << endl;
            birthdayAnimal = "Pig";
        
        
    }
}    


cout << "Now lets see what animal your personality is most like on the Chinese New Year." << endl<<endl<<endl; 


cout << "For the following questions, as your answer, enter either 1 for the first choice or 2 for the second choice."  << endl;

cout<< "The following questions will determine which animals you show most characteristics of, it may be multiple animals."<<endl<<endl;


//Question 1
cout<< "Are you a determined person or a doubtful person?" << endl;
cin >> Input; 

   
   
if (Input == 1){
    Pig_ = Pig_ + 1;
}   
    else if (Input == 2) {
        Dog_ = Dog_ + 1;
}   
            else {
                cout << "Wrong input"<<endl;
                cin >> Input;
}   
//Question 2   
cout << "Are you a non trickery person or a trickery person?" << endl;
cin >> Input;

if(Input == 1){
    Pig_ = Pig_ + 1;
}
else if (Input == 2) {
    Monkey_ = Monkey_ + 1;
} 
else {
    cin >> Input;
}   
   
//Question 3
cout << "Are you an aggresive person or a calm person?" << endl;
cin >> Input;

if(Input == 1){
    Dragon_ = Dragon_ + 1;
}
    else if (Input == 2) {
        Goat_ = Goat_ + 1;
    }   
        else{
            cin >> Input;
        }
   
//Question 4
cout << "Are you an honest person or a stubborn person" << endl;
cin >> Input;

if(Input == 1){
    Ox_= Ox_ + 1;
}   
   else if (Input ==2) {
       Dog_ = Dog_ + 1;
   }
        else{
            cin >> Input;
        }
   
//Question 5

cout << "Are you a talkative person or a quiet person?" << endl;
cin >> Input;
    
    if(Input == 1) {
        Rooster_ = Rooster_ + 1;
    }
        else if(Input == 2){
            Snake_ = Snake_ + 1;
        }
            else{
                cin >> Input;
            }
   
//Question 6

cout << "Do you like to work alone or work in a group?" << endl;
cin >> Input;

    if(Input == 1){
        Snake_ = Snake_ + 1;
    }
        else if (Input == 2){
            Horse_ = Horse_ + 1;
        }
            else{
                cin >> Input;
            }

//Question 7

cout << "Do you get discouraged easily yes or no?" << endl;
cin >> Input;

    if(Input == 1){
        Monkey_ = Monkey_ + 1;
    }
        else if (Input == 2){
            Ox_ = Ox_ + 1;
        }
            else{
                cin >> Input;
            }

//Question 8
cout << "Do you have a short temper, yes or no?" << endl;
cin >> Input;

    if(Input = 1){
        Tiger_ = Tiger_ + 1;
        Dragon_ = Dragon_ + 1;
    }
        else if (Input == 2){
            Rabbit_ = Rabbit_ + 1;
        }
            else{
                cin >> Input;
            }
   
//Question 9   
cout << "Are you a generous person or a selfish one?" << endl;
cin >> Input;    

    if (Input == 1) {
        Snake_ = Snake_ + 1;
        Dog_ = Dog_ + 1;
    }
        else if (Input == 2) {
            Pig_ = Pig_ + 1;
        }
            else {
                cin >> Input;
            }

//Question 10

cout << "Are you a perfectionist, yes or no?" << endl;
cin >> Input;    

    if (Input == 1) {
        Rat_ = Rat_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
        else{
            cin >> Input;
        }
   
// Question 11

cout << "Are you deeply religous, yes or no?" << endl;
cin >> Input;    


    if(Input == 1){
        Goat_ = Goat_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }

//Question 12

cout << "Are you a courageous person, yer or no?" << endl;
cin >> Input;
 
      if(Input == 1){
        Tiger_ = Tiger_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }

    
//Question 13

cout << "Are you a deep thinker, yes or no?" << endl;
cin >> Input;
    
      if(Input == 1){
        Rooster_ = Rooster_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }

//Question 14
cout << "Are you a strong-willed person, yes or no?" << endl;
cin >> Input;
    
      if(Input == 1){
        Ox_ = Ox_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }
   
//Question 15
cout << "Do you like to talk alot in social gatherings, yes or no?" << endl;
cin >> Input;
    
      if(Input == 1){
        Horse_ = Horse_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }
   
//Question16
cout << "Are you a gentle person, yes or no?" << endl;
cin >> Input;
   
      if(Input == 1){
        Rabbit_ = Rabbit_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }

//Question17
cout << "Do you like to gossip with people?" << endl;
cin >> Input;
    
      if(Input == 1){
        Rat_ = Rat_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }
   
//Question 18   
cout << "Do you have a good memory of things, yes or no?" << endl;
cin >> Input;

      if(Input == 1){
        Monkey_ = Monkey_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }
   
//Question19
cout << "Are you an inpatient person, yes or no?" << endl;
cin >> Input;

      if(Input == 1){
        Dragon_ = Dragon_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }
   
//Question20
cout << "Are you an easy going person with new people, yes or no?" << endl;
cin >> Input;

      if(Input == 1){
        Horse_ = Horse_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }
   
//Question21
cout << "Are you an independent person, yes or no" << endl;
cin >> Input;
    
      if(Input == 1){
        Rooster_ = Rooster_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }
   
//Question22

cout << "Do you have big ambitions in life, yes or no?" << endl;
cin >> Input;

      if(Input == 1){
        Rat_ = Rat_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }

//Question23

cout << "Are you a confident person, yes or no?" << endl;
cin >> Input;

      if(Input == 1){
        Tiger_ = Tiger_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }
   
   
   
   
   
   
//Question24
/*cout << "Do you tend to avoid arguments, yes or no?" << endl;
cin >> Input;

      if(Input == 1){
        Rabbit_ = Rabbit_ + 1;
    }
        else if (Input == 2){
            cout << "Next Question!" << endl;
        }
            else {
                cin >> Input;
            }*/
   
//Question 25
cout << "Do you see yourself as a compassionate person, yes or no?" << endl;
cin >> Input;

      if(Input == 1){
        Rabbit_ = Rabbit_ + 1;
    }
        else if (Input == 2){
        
        }
            else {
                cin >> Input;
            }
   


cout << endl;


if(Rat_== 3){
    cout << "You have charectiristics of the Rat zodiac sign" << endl;
        Rats = "Rat";
    
}
    

else {
    cout << "You are not a Rat because you do not have enough characteristics for the sign" << endl;
  }




if(Ox_== 3){
    cout << "You have charectiristics of the Ox zodiac sign" << endl;
        Oxs = "Ox";
    
}

else {
    cout << "You are not an Ox because you do not have enough characteristics for the sign" << endl;
  }





if(Tiger_== 3){
    cout << "You have charectiristics of the Tiger zodiac sign" << endl;
        Tigers = "Tiger";
    
}


else {
    cout << "You are not a Tiger because you do not have enough characteristics for the sign" << endl;
  }



if(Rabbit_== 3){
    cout << "You have charectiristics of the Rabbit zodiac sign" << endl;
        Rabbits = "Rabbit";
    
}

else {
    cout << "You are not a Rabbit because you do not have enough characteristics for the sign" << endl;
  }




if(Dragon_== 3){
    cout << "You have charectiristics of the Dragon zodiac sign" << endl;
        Dragons = "Dragon";
    
}

else {
    cout << "You are not a Dragon because you do not have enough characteristics for the sign" << endl;
  }




if(Snake_== 3){
    cout << "You have charectiristics of the Snake zodiac sign" << endl;
        Snakes = "Snake";
    
}
   
else {
    cout << "You are not a Snake because you do not have enough characteristics for the sign" << endl;
  }




if(Horse_== 3){
    cout << "You have charectiristics of the Horse zodiac sign" << endl;
        Horses = "Horse";
    
}

else {
    cout << "You are not a Horse because you do not have enough characteristics for the sign" << endl;
  }





if(Goat_== 3){
    cout << "You have charectiristics of the Goat zodiac sign" << endl;
        Goats = "Goat";
    
}

else {
    cout << "You are not a Goat because you do not have enough characteristics for the sign" << endl;
  }




if(Monkey_== 3){
    cout << "You have charectiristics of the Monkey zodiac sign" << endl;
        Monkeys = "Monkey";
    
}

else {
    cout << "You are not a Monkey because you do not have enough characteristics for the sign" << endl;
  }


if(Rooster_== 3){
    cout << "You have charectiristics of the Rooster zodiac sign" << endl;
        Roosters = "Rooster";
    
}

else {
    cout << "You are not a Rooster because you do not have enough characteristics for the sign" << endl;
  }



if(Dog_== 3){
    cout << "You have charectiristics of the Dog zodiac sign" << endl;
        Dogs = "Dog";
}

else {
    cout << "You are not a Dog because you do not have enough characteristics for the sign" << endl;
  }



if(Pig_== 3){
    cout << "You have charectiristics of the Pig zodiac sign" << endl;
        Pigs = "Pigs";
}
       
 else {
    cout << "You are not a Pig because you do not have enough characteristics for the sign" << endl;
  }  



cout << endl;    
    
cout << "Your birth year said you were the " << birthdayAnimal << " zodiac sign, and the test said you had charectiristics of the:" << endl;
cout << Rats << " " << Oxs << " " << Tigers << " " << Rabbits << " " << Dragons << " " << Snakes << " " << Horses << " " << Goats << " " << Monkeys << " " << Roosters << " " << Dogs << " " << Pigs << endl;    
    
    
Fout << "Your Name: " << User.getName() <<"." <<endl<< " Your birth year:" << User.getBirthday() << endl;
Fout << "Your birth year said you were the " << birthdayAnimal << " zodiac sign, and the test said you had charectiristics of the:" << endl;
Fout << Rats << " " << Oxs << " " << Tigers << " " << Rabbits << " "  << Dragons << " " << Snakes << " " << Horses << " " << Goats << " " << Monkeys << " " << Roosters << " " << Dogs << " " << Pigs << endl;
    
    
    
Fin.close();
Fout.close();
    
    

    
}



/*
Do you prefer to be alone or surrounded by friends?
Are you a morning person?
Do you like heights?
Do you like getting dirty or prefer to stay clean?
Are you a hard worker?
Do you tend to chase, or are you the one being chased?
Do you tend to earn your worth, or do you tent to take it from others?
Are you stealthy?
*/


//cout << "Are you 'mischivious'?"<< endl;