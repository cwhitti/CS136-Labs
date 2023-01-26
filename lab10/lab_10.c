// header files
#include "Console_IO_Utility.h"
#include "File_Output_Utility.h"
#include "File_Input_Utility.h"

// global constants
const int TOTAL_ROWS = 2;
const int TOTAL_COLUMNS = 3;
const int TOTAL_CHARS = 6;
const int INPUT_ARRAY_SIZE = 2;
const char PRESENCE_CHAR = 'X';
const char ABSENCE_CHAR = 'O';
const char PIPE_CHAR = '|';
typedef enum {ROW, COLUMN} tablePositions;
typedef enum {FULL, NOTFULL} tableIsFull;

// functions prototype
/*
Name: printProgramTitle
Process: displays program title
Function Input/Parameters: none
Function Output/Parameters: none
Function Output/Returned: none
Device Input/Keyboard: none
Device Output/Monitor: title displayed as specified
Dependencies: printf
*/
void printProgramTitle();
/*
Name: displayResults
Process: displays resulted table as specified in example
Function Input/Parameters: 2D array of characters
Function Output/Parameters: none
Function Output/Returned: none
Device Input/Keyboard: none
Device Output/Monitor: 2D array of characters as specified
Dependencies: printf
*/
void displayResults( char characterMatrix[ TOTAL_ROWS ][ TOTAL_COLUMNS ] );

// NOTE: THERE IS NO PROCESSING PART IN THIS TASK
int main()
    {

     // initialize program
        // define variables
		int rows, columns;
		int counter = 0;
		int rowEntered, columnEntered, charEntered;
		int tableIsFull = NOTFULL;


    // display title
		printProgramTitle();

    // initilize matrix of CHARACTERS filled with absence characters
		char characterMatrix[TOTAL_ROWS][TOTAL_COLUMNS];

		for (rows = 0; rows < TOTAL_ROWS; rows++)
		{
			for (columns = 0; columns < TOTAL_COLUMNS; columns++)
			{
				characterMatrix[rows][columns] = ABSENCE_CHAR;
			}
		}

    // initilize matrix of PRESENCE filled with absence characters
	 	char bufferMatrix[TOTAL_ROWS][TOTAL_COLUMNS];

		for (rows = 0; rows < TOTAL_ROWS; rows++)
		{
			for (columns = 0; columns < TOTAL_COLUMNS; columns++)
			{
				bufferMatrix[rows][columns] = ABSENCE_CHAR;
			}
		}

		// get input
	  while (tableIsFull != FULL)
	 {
		 //Get input
			//promptforchar
			charEntered =  promptForCharacter("Enter your character: ");
			printEndline();
			rowEntered = promptForInteger("Pick Row to enter value: ");
			columnEntered = promptForInteger("Pick column to enter value: ");
			printEndline();

			characterMatrix[rowEntered][columnEntered] = charEntered;
			bufferMatrix[rowEntered][columnEntered] = PRESENCE_CHAR;

			//loop through buffer matrix
			for (rows = 0; rows< TOTAL_ROWS; rows++)
			{
				for (columns = 0; columns < TOTAL_COLUMNS; columns++)
				{
					if (bufferMatrix[rows][columns] == PRESENCE_CHAR)
						{
							counter++;
						}
					else
						{
							counter = 0;
						}

				}
			}

		if (counter == TOTAL_COLUMNS * TOTAL_ROWS)
			{
				tableIsFull = FULL;
			}
	 }

     // display results
	 displayResults(characterMatrix);

     // end program
	 printEndline();
	 printString("End Program");
	 return 0;
    }


// supportive functions

void printProgramTitle()
{
	printEndline();
	printString("FILLING IN ARRAY");
	printEndline();
	printString("==================");
	printEndline();
	printEndline();
}

void displayResults( char characterMatrix[ TOTAL_ROWS ][ TOTAL_COLUMNS ] )
{
	int rows, columns;
	printCharacter(PIPE_CHAR);
	for (rows = 0; rows < TOTAL_ROWS; rows++)
			{
				for (columns = 0; columns < TOTAL_COLUMNS; columns++)
				{
					printCharacter(characterMatrix[rows][columns]);
					printCharacter(PIPE_CHAR);
				}
				printEndline();
				printCharacter(PIPE_CHAR);
			}

}
