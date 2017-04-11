/*
Brigido Valdovinos
04/06/17
This program will play a game between the computer and the user.
The game is a modified version of rock, paper, scissors, but has two more options; lizard and Spock.
The game wiil be played to best of 3, 5, or 7. The program will tell who won.
*/

#include <iostream>
#include <cstdlib>     // Use random.
#include <ctime>      // Use of time.
using namespace std;



int main()
{

    int userChoice = 0;
    int compChoice = 0;
    int userWins = 0;
    int compWins = 0;
    int gamesPlayed = 1;
    int numOfGames;
    int Ties = 0;



//Rules of the game.
        cout <<endl <<"    Let's play Rock, Paper, Scissors, Lizard, Spock. " <<endl <<endl;
        cout <<" Rules : " <<endl << endl;
        cout <<" Scissors cuts paper. Paper covers rock. Rock crushes lizard. Lizard poisons Spock."<<endl; 
        cout <<" Spock smashes scissors. Scissors decapitates lizzard. Lizard eats paper. Paper disproves Spock."<<endl;
        cout <<" Spock vaporizes rock. Rock crushes scissors. " << endl;
        cout <<" " << endl;
        
        cout<< "Chose the number of games you would like to play; 3, 5, or 7."<<endl;   //Number of games
        cin>> numOfGames;
            
            /*
1 = Rock
2 = Paper
3 = Scissors
4 = Lizard
5 = Spock
            */

    while (userChoice <= 5 && compChoice <= 5 && gamesPlayed <= numOfGames) {  
                //While loop so the choices stay within the limits of the game
                //and the game can be played a certain amount of times.
                
            
                                       
                            
                                        //I have this in the loop so that the options are always explained.
                                cout <<endl<<"    Chose an attacker: "<<endl;
                                cout <<" 1 = Rock, 2 = Paper " << endl;
                                cout <<" 3 = Scissors, 4 = Lizard, 5 = Spock " << endl;
                        
                        
                        
                                srand(time(0)); // Random number.
                                compChoice =((rand() % 5) +1);//Random from 1-5.
                        
                    cin>>userChoice;
                    cout<<endl;



            if (userChoice == 1) {          // if the user picks rock. 
                cout << "You chose rock." << endl;
                
                        if (compChoice == 1) {
                            cout << "The computer chose rock." << endl;
                            cout << "its a tie" << endl;    //If it's a tie, I will not keep track of scores.
                                }
                        
                       else if (compChoice == 2) { 
                            cout << "The computer chose paper." << endl;
                            cout << "You lose" << endl;
                                compWins++;     //Every time I lose, the computer gets a point.
                                }
                                
                        else if (compChoice == 3) {
                            cout << "The computer chose scissors." << endl;
                            cout << "You win" << endl;
                                userWins++;     //Every time I win, I get a point.
                                }
                        else if (compChoice == 4) {
                            cout << "The computer chose lizard." << endl;
                            cout << "You win" << endl;
                                 userWins++;
                                }
                                
                        else if (compChoice == 5) {
                            cout << "The computer chose Spock." << endl;
                            cout << "You lose" << endl;
                                compWins++;    
                                }
                }
            
            
            
            
            
            else if (userChoice == 2) {      // if the user picks paper
                cout << "You chose paper." << endl;
                
                        if (compChoice == 1) {
                            cout << "The computer chose rock." << endl;
                            cout << "You win" << endl;    
                                userWins++;    
                                }
                            
                        else if (compChoice == 2) {
                            cout << "The computer chose paper." << endl;
                            cout << "Its a tie" << endl;
                                }        
                            
                        else if (compChoice == 3) {
                            cout << "The computer chose scissors." << endl;
                                cout << "You lose" << endl;
                                compWins++;    
                                }    
                            
                        else if (compChoice == 4) {
                            cout << "The computer chose lizard." << endl;
                            cout << "You lose" << endl;
                               compWins++;
                                }
                            
                        else if (compChoice == 5) {
                            cout << "The computer chose Spock." << endl;
                            cout << "You win" << endl;
                            userWins++;
                                }
                }
                   
                   
                   
                    
                    
            else if (userChoice == 3) {            // if the user picks scissors
                cout << "You chose scissors." << endl;
                
                        if (compChoice == 1) {
                            cout << "The computer chose rock." << endl;
                            cout << "You lose" << endl;
                            compWins++;
                                }
                            
                        else if (compChoice == 2) {
                            cout << "The computer chose paper." << endl;
                            cout << "You win" << endl;
                                userWins++;
                                }    
                            
                        else if (compChoice == 3) {
                            cout << "The computer chose scissors." << endl;
                                cout << "Its a tie" << endl;
                                } 
                            
                        else if (compChoice == 4) {
                            cout << "The computer chose lizard." << endl;
                                cout << "You win" << endl;
                                userWins++;
                                }
                            
                        else if (compChoice == 5) {
                            cout << "The computer chose Spock." << endl;
                            cout << "You lose" << endl;
                            compWins++;    
                                }
                            
                }
            
            
            
            
            
            else if (userChoice == 4) {                  // if the user picks lizard
                cout << "You chose lizard." << endl;
                
                        if (compChoice == 1) {
                            cout << "The computer chose rock." << endl;
                            cout << "You lose" << endl;
                            compWins++;
                                }
                            
                        else if (compChoice == 2) {
                            cout << "The computer chose paper." << endl;
                            cout << "You win" << endl;
                            userWins++;
                                }
                            
                        else if (compChoice == 3) {
                            cout << "The computer chose scissors." << endl;
                            cout << "You lose" << endl;
                            compWins++;
                                }
                            
                        else if (compChoice == 4) {
                            cout << "The computer chose lizard." << endl;
                            cout << "Its a tie" << endl;
                                }    
                            
                        else if (compChoice == 5) {
                            cout << "The computer chose Spock." << endl;
                            cout << "You win" << endl;
                            userWins++;
                                }
                
            }
            
            
            
            
            
            else if (userChoice == 5) {                  // if the user picks spock
                cout << "You chose Spock." << endl;
                
                        if (compChoice == 1) {
                            cout << "The computer chose rock." << endl;
                            cout << "You win" << endl;
                            userWins++;
                                }
                            
                        else if (compChoice == 2) {
                            cout << "The computer chose paper." << endl;
                            cout << "You lose" << endl;
                            compWins++;
                                }    
                        
                        else if (compChoice == 3) {
                            cout << "The computer chose scissors." << endl;
                            cout << "You win" << endl;    
                            userWins++;
                                }    
                            
                        else if (compChoice == 4) {
                            cout << "The computer chose lizard." << endl;
                            cout <<  "You lose" << endl;
                            compWins++;
                                }
                        
                        else if (compChoice == 5) {
                            cout << "The computer chose Spock." << endl;
                            cout << "Its a tie" << endl;
                                }    
            
            }
            
            
            
            
            

        gamesPlayed = gamesPlayed + 1;

}


        Ties = (numOfGames - userWins - compWins);   //Wanted to keep track of ties.

//This will display the scores of  user and computer, and ties.
    cout<<endl<<"User score: "<<userWins<<endl;
    
    cout<<"Computer score: "<<compWins<<endl;
    
    cout<<"Ties: "<< Ties<<endl;
    
        
        
        
        
        if (userWins > compWins){
            cout<< "You have won!"<<endl;   //If I win.
                }
        
        
        else if (userWins < compWins){
            cout<<"You have lost."<<endl;   //If computer wins.
                }
        
                
        else{
            cout<<"You have tied with the computer"<<endl;  //If I tie.
                }
}
