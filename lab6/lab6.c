// header files
#include "Console_IO_Utility.h"

// global constants
    // none

// function prototypes
int generateRandChoice();
// TODO - write function prototypes

// main program
int main()
    {
     // show title
        // function: printString, printEndline(s)
    printEndline();
    printString( "Rock / Paper / Scissors" );
    printEndline();


	 // initialize variables/functions
    int userInput;
	  char winner;


	 // get user input
        // Display options of user input
            // functions: printString, printEndline
  printString("Options to choose:");
  printEndline();
  printString("0 - Scissors");
  printEndline();
  printString("1 - Paper");
  printEndline();
  printString("2 - Rock");
  printEndline();

        // get users vale for rock/paper/scissors
            // function: promptForInteger, printEndline
	 userInput = promptForInteger("Enter your value: ");
	 printEndline();

        // TODO - decision making, computations, display output, and do returns
  playGame(userInput);

  return 0
   }

// supporting functions


/*
Name: playGame
Process: playes rock paper siccors game, generates random choice for AI player
         and returns who won the game
Function input/parameters: previously chosen players input
                            rock / paper / scissors represented by 2 / 1 / 0
Function output/parameters: none
Function output/returned: character which represents who won the game
Function input/keyboard: none
Device output/file: none
Dependencies: generateRandChoice, whoWins
*/

// TODO - function playGame
int playGame(int userInput)
{
  //initialize variables
  int aiChoice;

  //computation
  aiChoice = generateRandChoice();


}
/*
Name: whoWins
Process: based on user input and randomly generated value decides who wins
         via serius of decision making statments
Function input/parameters: previously chosen players input
                            rock / paper / scissors represented by 2 / 1 / 0
                            and randomly generated number of the same range
Function output/parameters: none
Function output/returned: character which represents who won the game
                            'U' - user; 'R' - random (AI); 'F' - friendship.
Function input/keyboard: none
Device output/file: none
Dependencies: none
*/

// TODO - function whoWins

int whoWins(int userInput, int aiChoice)
{

  char whoWins;

  //computations
  //Ties, 01, 10, 02, 20, 12, 21
  //rock / paper / scissors represented by 2 / 1 / 0
  if (userInput == aiChoice)
  {
    whoWins = "F";
  }

  else if (userInput == aiChoice)
  {
    whoWins = "F";
  }






}

/*
Name: generateRandChoice
Process: based on user input and randomly generated value decides who wins
         via serius of decision making statments
Function input/parameters: previously chosen players input
                            rock / paper / scissors represented by 2 / 1 / 0
                            and randomly generated number of the same range
Function output/parameters: none
Function output/returned: character which represents who won the game
                            'U' - user; 'R' - random (AI); 'F' - friendship.
Function input/keyboard: none
Device output/file: none
Dependencies: none
*/
int generateRandChoice()
	{
     // initialize variables
	 int randNum;

     // computations
        // initilize random seed
	 srand(time(0));
        // generate random number between 0 and 2 (inclusive)
	 randNum = rand() % 2 + rand() % 2;

     // return result
	 return randNum;
	}
