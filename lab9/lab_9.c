/ header files
#include <time.h>     // for seeding srand
#include <stdlib.h>   // for srand, rand
#include "Console_IO_Utility.h"
#include "File_Output_Utility.h"
#include "File_Input_Utility.h"

// global constants
const int MIN_RAND_LIMIT = 0;
const int MAX_RAND_LIMIT = 100;
const int MIN_ARRAY_SIZE = 1;
const int MAX_ARRAY_SIZE = 10;

// function prototypes
// TODO
void displayResults (int size, int array[]);
int getRandBetween(int low, int high);
void printProgramTitle();

int main( int argv, char *argc[] )
   {
	    // TODO
	    // initialize variables
	    int count, numEntered, numList[ STD_STR_LEN ];

	    // print title
	    	// function: printProgramTitle
	    printProgramTitle();

	    srand(time(NULL));

	    // prompt values for numEntered
	    numEntered = promptForInteger("Enter array size to fill in with random values: ");

	    // Ccheck if numEntered is between min and max size
	    if(numEntered >= MIN_ARRAY_SIZE && numEntered <= MAX_ARRAY_SIZE)
	    {
	    	// loop as long as count is less than numEntered
		    for(count = 0; count < numEntered; count++)
		    {
		    	// get value for array
		    	numList[count] = getRandBetween(MIN_RAND_LIMIT, MAX_RAND_LIMIT);
			}
		}

		// check if numEntered is greater than max size
		else if ( numEntered > MAX_ARRAY_SIZE)
		{
			// set numEntered to max size
			numEntered = MAX_ARRAY_SIZE;

			// loop as long as count is less than numEntered
			for(count = 0; count < numEntered; count++)
		    {
		    	//get values for array
		    	numList[count] = getRandBetween(MIN_RAND_LIMIT, MAX_RAND_LIMIT);
			}
		}

		// if numEntered is not greater than min size
		else
		{
			// set numEntered to min size
			numEntered = MIN_ARRAY_SIZE;
			// set count to zero
			count = 0;
			// get value for array
			numList[count] = getRandBetween(MIN_RAND_LIMIT, MAX_RAND_LIMIT);
		}


    	// display results
    		// functions: displayResults
    	displayResults (numEntered, numList);

    	// return 0
    	return 0;
   }

/*
Name: displayResults
Process: displays an array of randomly generated values
         uses pipes to distinguish each array cell
Function Input/Parameters: array size (int)
                           array of values (int *)
Function Output/Parameters: none
Function Output/Returned: none
Device Input/Keyboard: none
Device Output/Monitor: displays items as specified
Dependencies: printf
*/
// TODO
void displayResults (int size, int array[])
{
	// initialize variables
	int count;

	// start prime loop
	printCharacter( PIPE );

	// loop in front
	for(count = 0; count < size; count ++)
		{
			printCharacter( SPACE);
			printInteger( array[count]) ;
			printCharacter( SPACE );
			printCharacter( PIPE );
		}

	// end program
	printf("\n\nEnd Program");

}


/*
Name: getRandBetween
Process: finds random value between two given parameters, inclusive,
         and returns
Function Input/Parameters: low limit value (int), high limit value (int)
Function Output/Parameters: none
Function Output/Returned: random value as specified (int)
Device Input/Keyboard: none
Device Output/Monitor: none
Dependencies: rand
*/
// TODO
int getRandBetween(int low, int high)
{
	// initialize variables
	int range;

	// set range
	range = high - low + 1;

	// return value
	return rand()% range + low;
}

/*
Name: printProgramTitle
Process: displays program title
Function Input/Parameters: none
Function Output/Parameters: none
Function Output/Returned: none
Device Input/Keyboard: none
Device Output/Monitor: title displayed as specified
Dependencies: Console IO Utilities tools
*/
// TODO
void printProgramTitle()
{
	// print title
	printf("Generate Random Array\n");
    printf("=======================\n \n");
}
