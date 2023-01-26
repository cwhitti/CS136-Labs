// header files
#include <stdlib.h>
#include "Console_IO_Utility.h"
#include "File_Output_Utility.h"
#include "File_Input_Utility.h"

// global constants
const int EXPECTED_ARGUMENTS_COUNT = 2;
const char COMMA_CHAR = ',';
const char TAB_CHAR = '\t';

// Protoypes
void displayTable( char *allCharsArray, int charsCount );
int getcharsCount(const char* filename);
void storeCharsInArray(const char* filename, char* allCharsArray);
void swapCommas( char *allCharsArray, int charsCount);

int main(int argc, char *argv[])
{
    // initializze variables
    const char* filename = argv[1];
    char *allCharsArray;
    int charsCount;

    //Check if enough arguments provided
    if (argc != EXPECTED_ARGUMENTS_COUNT)
    {
      printf( "\nERROR: You didn't provide necessary arguments!\n");
    }

    //Good arguments given
    else
    {
      // count chars in array
          // functions: getcharsCount
      charsCount = getcharsCount( filename );

      // allocate space for array
          // funcitons: malloc, sizeOf
      allCharsArray = (char*)malloc(charsCount * sizeof(int));

      // pull chars from list and enter into array
          // function: storeCharsInArray()
      storeCharsInArray( filename, allCharsArray );

      //swap the commas
        //function: swapCommas()
      swapCommas( allCharsArray, charsCount );

      //display the table
        //function: displayTable()
      displayTable( allCharsArray, charsCount );
    }

    //end program
    return 0;
}

int getcharsCount(const char* filename)
{
    // initialize variables
    int loopCount = 0;

    // open input file
        // functions: openInputFile
    openInputFile(filename);

    // check if file opened
       // functions: checkForInputFileOpen
    if (checkForInputFileOpen())
    {
        // loop through till end of file
            // functions: checkForEndOfInputFile
        while (!checkForEndOfInputFile())
        {
            // go over values from file
                // functions: readIntegerFromFile, readCharacterFromFile
            readRawCharFromFile();

            // counts chars in array
            loopCount++;
        }
    }
    // else file didnt open correctly
    else
    {
        printf("File not found.\n");
        printf("Program aborted.\n");
        return 0;
    }
    // close input file
    // functions: closeInputFile
    closeInputFile();

    // return count of chars in file
    return loopCount;
}

void storeCharsInArray(const char* fileName, char* allCharsArray)
{
    // initialize variables
    int loopCount = 0;

    // open input file
    // functions: openInputFile
    openInputFile(fileName);

    // check if file opened
       // functions: checkForInputFileOpen
    if (checkForInputFileOpen())
    {
        // prime loop
            // functions: readIntegerFromFile
        allCharsArray[loopCount] = readIntegerFromFile();
        loopCount++;

        // loop through till end of file
            // functions: checkForEndOfInputFile
        for (loopCount = 0; loopCount < 130; loopCount++)
        {
            // pull values from file and set array
                // functions: readRawCharFromFile();
            allCharsArray[loopCount] = readRawCharFromFile();
        }
    }

    // close input file
        // functions: closeInputFile
    closeInputFile();
}

//swaps all commas in array with tabs
void swapCommas( char *allCharsArray, int charsCount)
{
  //initialize variables
  int index;
  char currentChar;

  //loop through all items in the list
  for (index = 0; index < charsCount; index++)
  {
    //get current char
    currentChar = allCharsArray[index];

    // check for end of column character
     if (currentChar == COMMA_CHAR)
       {
         // swap end of column with a pipe char
         currentChar = TAB_CHAR;

         //assign the new character
         allCharsArray[index] = currentChar;
       }
  }
}

//displays final table (with Tabs) DOES NOT provides error message
void displayTable( char *allCharsArray, int charsCount )
{
  //initialize variables
  int index;

  //loop through all items in the list
  for (index = 0; index < charsCount; index++)
  {
      printf("%c", allCharsArray[index]);
  }

  //print one final endline
  printf("\n");
}
