#include <stdio.h>
#include <stdlib.h>
#include "Console_IO_Utility.h"
#include "File_Output_Utility.h"
#include "File_Input_Utility.h"


const char FILENAME[] = "single.csv";
const char END_OF_LINE_CHAR = '\n';
const char END_OF_COLUMN_CHAR = ',';
const char PIPE_CHAR = '|';
typedef enum { PASS, FAIL } SuccessFlag;

typedef struct charNodeStruct
    {
     char titleChar;
     struct charNodeStruct *nextNode;
    } charNode;


void displayTitle( charNode *titleLinkedList );
charNode *generateTitleString();


int main()
    {
     // TODO
     // initialise variables
     charNode *titleLinkedList;
     SuccessFlag successFlag;
     // get input
        // open file and check for success
     if( openInputFile( FILENAME ) )
        {
         // generate title string
            // functions: generateTitleString
         titleLinkedList = generateTitleString();

         // update success flag
         successFlag = PASS;
        }
     // otherwise if file is not opened
     else
        {
         // update success flag
         successFlag = FAIL;
        }

     // display results
        // check success flag to pass
     if(successFlag == PASS)
        {
         // display final title
            // function: displayTitle
         displayTitle(titleLinkedList);
        }
     // otherwise success flag is not pass
     else
        {
         // display file not found error
            // function: printf
         printf("\nERROR: FILE NOT FOUND\n");
        }

     // End program
        // return success
     return 0;
    }

// TODO Step 5 and 6 for displayTitle
/*
Name: displayTitle
Process:
Function Input/Parameters:
Function Output/Parameters:
Function Output/Returned:
Device Input/Keyboard:
Device Output/Monitor:
Dependencies: printf
*/
void displayTitle( charNode *titleLinkedList )
    {
     // loop while linked list is not NULL
     while(titleLinkedList != NULL)
     {
     	printf("%c", (titleLinkedList -> titleChar));

     	titleLinkedList = titleLinkedList -> nextNode;
	 }

    }

// TODO Step 5 and 6 for generateTitleString
/*
Name: generateTitleString
Process:
Function Input/Parameters:
Function Output/Parameters:
Function Output/Returned:
Device Input/Keyboard:
Device Output/Monitor:
Dependencies: malloc, sizeof, readRawCharFromFile
*/
charNode *generateTitleString()
    {

     // initialize variables
     char currentChar;
     charNode *traversalPtr, *headPtr = NULL;

     // allocate memory to new node (use traversal pointer)
     traversalPtr = (charNode*) malloc(sizeof(charNode));

     // prime the loop by reading in raw char
        // function: readRawCharFromFile
     currentChar = readRawCharFromFile();

     // assign current char to first node title char (use traversal pointer)
     traversalPtr -> titleChar = currentChar;

     // point head pointer to the same place as traversal pointer
     headPtr = traversalPtr;

     // loop while end of line is not reached
        // function: checkForEndOfInputFile
     while(currentChar != END_OF_LINE_CHAR)
        {
         // read in new character
         currentChar = readRawCharFromFile();

         // allocate memory for new node
         traversalPtr -> nextNode = (charNode*) malloc(sizeof(charNode));

         // traverse pointer to new node
         traversalPtr = traversalPtr -> nextNode;

         // assign next node to be NULL
         traversalPtr -> nextNode = NULL;

         // check for end of column character
        	if (currentChar == END_OF_COLUMN_CHAR)
        		{
        			  // swap end of column with a pipe char
        			currentChar = PIPE_CHAR;

				}

         // assign current char to traversal pointer title char
         traversalPtr -> titleChar = currentChar;
        }

     // returb head pointer
     return headPtr;

    }
