/*
Author : Shovit Bastakoti

Program : To simulate a command line rock, paper, scissors game in which 3 wins by either wins the match


*/


#include <iostream>
#include <cstdlib>
using namespace std;

/*
declaring three constant variables
*/ 
const char rock = 'R';

const char scissors = 'S';

const char paper = 'P';

 
/*
method to get Users choice by asking through console
*/ 
  char
getUserChoice ()
{
  
char choice;
  
 
cout << "Your Turn , Enter R for Rock, P for Paper, S for Scissors" <<
    endl;
  
cin >> choice;
  
return choice;

}


 
/*
getting computer choice by use of
library functions srand and rand 
and assigning numbers to either 
rock,paper or scissiors
*/ 
  char
getComputerChoice ()
{
  
char choice;
  
int randNum;
  
srand (time (NULL));
  
randNum = 1 + rand () % 3;
  
 
 
 
if (randNum == 1)
    {
      
choice = 'P';
    
}
  else if (randNum == 2)
    {
      
choice = 'R';
    
}
  else
    choice = 'S';
  
 
return choice;

}


/*
method to display the two choices made by user and computer
*/ 
  void
display (char getComputerChoice, char getUserChoice)
{
  
string UserChoice;
  
string ComputerChoice;
  
if (getComputerChoice == paper)
    
ComputerChoice = " Paper";
  
  else if (getComputerChoice == rock)
    
ComputerChoice = "Rock";
  
  else
    
ComputerChoice = "Scissors";
  
 
if (getUserChoice == paper)
    
UserChoice = "Paper";
  
  else if (getUserChoice == rock)
    
UserChoice = "Rock";
  
  else
    
UserChoice = "Scissors";
  
 
cout << "User has selected " + UserChoice + "  while " +
    "Computer has selected " + ComputerChoice + "  " << endl;

 
}


 
/*
The simulator function  that uses if else to manually determine the winner by implying game logic
*/ 
  char
Simulator (char getComputerChoice, char getUserChoice)
{
  
char winner;
  
if (getComputerChoice == paper && getUserChoice == rock)
    
winner = 'C';
  
  else if (getComputerChoice == rock && getUserChoice == paper)
    
winner = 'U';
  
  else if (getComputerChoice == scissors && getUserChoice == rock)
    
winner = 'U';
  
  else if (getComputerChoice == scissors && getUserChoice == paper)
    
winner = 'C';
  
  else if (getComputerChoice == rock && getUserChoice == scissors)
    
winner = 'C';
  
  else if (getComputerChoice == paper && getUserChoice == scissors)
    
winner = 'U';
  
  else if (getComputerChoice == rock && getUserChoice == rock)
    
winner = 'N';
  
  else if (getComputerChoice == paper && getUserChoice == paper)
    
winner = 'N';
  
  else if (getComputerChoice == scissors && getUserChoice == scissors)
    
winner = 'N';
  
 
if (winner == 'U')
    
cout << "User Wins this round" << endl;
  
  else if (winner == 'C')
    
cout << "Computer wins this round " << endl;
  
  else if (winner == 'N')
    
cout << "Draw" << endl;
  
 
return winner;

}


 
int
main ()
{
  
    /*
       counter variables to keep of wins and draws
     */ 
  int numOfWinsbyUser = 0;
  
int numOfWinsbyComputer = 0;
  
int numOfDraws = 0;
  
 
    /* 
       
       while loop to check if a player has won three times or not
     */ 
    while (numOfWinsbyUser < 3 && numOfWinsbyComputer < 3)
    
    {
      
char UserChoice = getUserChoice ();
      
char ComputerChoice = getComputerChoice ();
      
 
display (ComputerChoice, UserChoice);
      
 
char storeWinner = Simulator (ComputerChoice, UserChoice);
      
 
	/*
	   
	   incrementing counter variables depending upon who won
	 */ 
	if (storeWinner == 'U')
	{
	  
numOfWinsbyUser = numOfWinsbyUser + 1;
	}
      
      else if (storeWinner == 'C')
	{
	  
numOfWinsbyComputer = numOfWinsbyComputer + 1;
	}
      
      else if (storeWinner == 'N')
	{
	  
numOfDraws += 1;
	
}
    
 
}
  
 
 
 
    /*
       Displaying who won the game overall by 3 wins 
     */ 
    
if (numOfWinsbyUser == 3)
    
 
cout << "User wins the match " << endl;
  
  else if (numOfWinsbyComputer == 3)
    
cout << "Computer wins the match" << endl;
  
 
 
return 0;

}
