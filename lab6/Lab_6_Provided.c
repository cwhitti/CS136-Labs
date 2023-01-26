// header files
#include "Console_IO_Utility.h"

// global constants
    // none

// function prototypes
int generateRandChoice();
char playGame(int userInput);
char whoWins( int userInput, int aiChoice );

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
     
        // get users value for rock/paper/scissors
            // function: promptForInteger, printEndline
	 userInput = promptForInteger("Enter your value: ");
	 printEndline();
     
        // TODO - decision making, computations, display output, and do returns
     // Process Input
    if ( userInput < 0 || userInput > 2 )
     {
        printString("Sorry no such option! Try again");
        printEndline();
     }
    else
    {
     // Determine Winner
    winner = playGame(userInput);

     // Display Output
    printString("The winner is: ");
    printCharacter(winner);
    printEndline();
    printEndline();
    }

    // End Program 
    return 0;

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

char playGame(int userInput)
{
    // Initialize Variables
    int aiChoice = 0;
    char theWinner;

    // Computation
        //Get the AI choice
    aiChoice = generateRandChoice();
        //Determine who wins between user and ai
    theWinner = whoWins( userInput, aiChoice );
    
    // Return Result
    return theWinner;
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

char whoWins(int userInput, int aiChoice)
{
    // Initailize Variables
    char theWinner;

    // Computation (01, 10, 02, 20, 12, 21)

    //User and ai choose the same
    if (userInput == aiChoice)
    {
    theWinner = 'F';
    }
    
    //User chooses scissors, ai chooses paper, user wins
    else if (userInput == 0 && aiChoice == 1)
    {
    theWinner = 'U';
    }

    //User chooses paper, ai chooses scissors, ai wins
    else if (userInput == 1 && aiChoice == 0)
    {
    theWinner = 'R';
    }

    //User chooses scissors, ai chooses rock, ai wins
    else if (userInput == 0 && aiChoice == 2)
    {
    theWinner = 'R';
    }

    //User chooses rock, ai chooses paper, user wins
    else if (userInput == 2 && aiChoice == 0)
    {
    theWinner = 'U';
    }

    //User chooses paper, ai chooses rock, user wins
    else if (userInput == 1 && aiChoice == 2)
    {
    theWinner = 'U';
    }

    //User chooses rock, ai chooses paper, ai wins
    else
    {
    theWinner = 'R';
    }

    // Return Result
    return theWinner;
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