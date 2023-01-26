/ header files
#include "StandardConstants.h"
#include "Console_IO_Utility.h"
#include "File_Input_Utility.h"
#include "File_Output_Utility.h"


// function prototypes

/*
Name: isLowerCaseLetter
Process: returns true if test character is lower case letter,
         MUST USE ONLY one line of code
Function input/parameters: test character (char)
Function output/parameters: none
Function output/returned: Boolean result of specified test
Function input/keyboard: none
Device input/file: none
Dependencies: none
*/
bool isLowerCaseLetter(char test_char);
// TODO


/*
Name: isUpperCaseLetter
Process: returns true if test character is upper case letter,
         MUST USE ONLY one line of code
Function input/parameters: test character (char)
Function output/parameters: none
Function output/returned: Boolean result of specified test
Function input/keyboard: none
Device input/file: none
Dependencies: none
*/
bool isUpperCaseLetter(char test_char);
// TODO




/*
Name: countLettersInFile
Process: input file is opened and checked for success,
         characters are retrieved and counted;
         upper case, lower case, and other symbol ints are updated,
         pointer must be dereferenced to so it can be incemented use "*"
         if file opening failure occurs returns false
Function input/parameters: file name (const char *)
Function output/parameters: upper and lower case values as well as other symbols
Function output/returned: Boolean result of operation as specified
Function input/keyboard: none
Device input/file: data accessed from hard drive as specified
Dependencies: File Input Utility tools, isUpperCaseLetter, isLowerCaseLetter,
              getLetterIndex

*/
bool countLettersInFile( char *inputFileName, int *upperCaseLetters, int *lowerCaseLetters, int *otherSymbols );
// TODO


/*
Name: outputResultsToFile
Process: opens file for output, writes multiple strings and integers to file,
         each pair of string and integer has coresponding endline
Function input/parameters: file name (const char *),
                           int upper case letters,
                           int lower case letters,
                           int other symbols letters,
Function output/parameters: none
Function output/returned: none
Function input/keyboard: none
Device output/file: none
Dependencies: openOutputFile, writeStringToFile, writeIntegerToFile,
              writeEndlineToFile, closeOutputFile
*/
// TODO
void outputResultsToFile( char *outputFileName, int upperCaseLetters, int lowerCaseLetters, int otherSymbols );


// main program
int main()
   {
    // initialize function

        // initialize variables, function
        char inputFileName[ STD_STR_LEN ], outputFileName[ STD_STR_LEN ];
        int upperCaseLetters = 0, lowerCaseLetters = 0, otherSymbols = 0;
        bool fileSuccess;

            // show title
                // function: printf
            printf( "\nLETTER ANALYSIS PROGRAM\n" );
            printf( "=======================\n\n" );

        // get input

            // get input file name
                // function: promptForString
        promptForString( "Enter input file name to be accessed: ",
                            inputFileName );

            // get output file name
                // function: promptForString
        promptForString( "Enter output file name for output   : ",
                            outputFileName );


        // processing

            // run analysis process
                // function: countLettersInFile
        fileSuccess = countLettersInFile( inputFileName,
                                          &upperCaseLetters,
                                          &lowerCaseLetters,
                                          &otherSymbols );

        // output/display results

            // check for successful access
            if( fileSuccess )
               {
                // output both letter analyses to file
                   // function: outputResultsToFile
                outputResultsToFile( outputFileName,
                                     upperCaseLetters,
                                     lowerCaseLetters,
                                     otherSymbols );
                // print success message
                   // function: printf
                printf( "\nSUCCESS: Output was saved to file\n\n" );
               }
            // otherwise, assume failed file access
            else
               {
                // print error message
                   // function: printf
                printf( "\nERROR: Unable to open input file,"
                        "program aborted\n\n" );
               }

        // end program

           // show program end
              // function: printf
           printf( "Program End\n" );

           // return successful program
           return 0;
   }


// supporting functions

/*
Name: countLettersInFile
Process: input file is opened and checked for success,
         characters are retrieved and counted;
         upper case, lower case, and other symbol ints are updated,
         pointer must be dereferenced to so it can be incemented use "*"
         if file opening failure occurs returns false
Function input/parameters: file name (const char *)
Function output/parameters: upper and lower case values as well as other symbols
Function output/returned: Boolean result of operation as specified
Function input/keyboard: none
Device input/file: data accessed from hard drive as specified
Dependencies: File Input Utility tools, isUpperCaseLetter, isLowerCaseLetter,
              getLetterIndex
*/
// TODO
bool countLettersInFile( char *inputFileName, int *upperCaseLetters, int *lowerCaseLetters, int *otherSymbols )
{
	//initalize variables
	char currentCharacter;

	//Check if open success
	if (openInputFile( inputFileName ) )
	{

		//prime the loop
		currentCharacter = readCharacterFromFile();

		//Loop thjrough file
		while( !checkForEndOfInputFile() )
		{

			//Find if uppercase
				//Function: isUpperCaseLetter
					//if true, raise counter
			    if ( isUpperCaseLetter(currentCharacter))
			    {
			    	*upperCaseLetters += 1;
				}
			//Find if lowercase
				//Function: isLowerCaseLetter
					//if true, raise counter
			    else if ( isLowerCaseLetter(currentCharacter) )
			    {
			    	*lowerCaseLetters += 1;
				}
			//Find if other symbol ; else
				//If else, raise counter
				else
				{
					*otherSymbols += 1;
				}
			// prime for next loop
			currentCharacter = readCharacterFromFile();
		}

		return 1;
		}

	else
	{
		return 0;
	}
}

/*
Name: isLowerCaseLetter
Process: returns true if test character is lower case letter,
         MUST USE ONLY one line of code
Function input/parameters: test character (char)
Function output/parameters: none
Function output/returned: Boolean result of specified test
Function input/keyboard: none
Device input/file: none
Dependencies: none
*/
// TODO
bool isLowerCaseLetter(char test_char)
{
	return (test_char >= 'a' ) && (test_char <= 'z');

}


/*
Name: isUpperCaseLetter
Process: returns true if test character is upper case letter,
         MUST USE ONLY one line of code
Function input/parameters: test character (char)
Function output/parameters: none
Function output/returned: Boolean result of specified test
Function input/keyboard: none
Device input/file: none
Dependencies: none
*/
// TODO
bool isUpperCaseLetter(char test_char)
{
	return ( test_char >= 'A'  && test_char <= 'Z');

}



/*
Name: outputResultsToFile
Process: opens file for output, writes multiple strings and integers to file,
         each pair of string and integer has coresponding endline
Function input/parameters: file name (const char *),
                           int upper case letters,
                           int lower case letters,
                           int other symbols letters,
Function output/parameters: none
Function output/returned: none
Function input/keyboard: none
Device output/file: none
Dependencies: openOutputFile, writeStringToFile, writeIntegerToFile,
              writeEndlineToFile, closeOutputFile
*/
// TODO

void outputResultsToFile( char *outputFileName, int upperCaseLetters, int lowerCaseLetters, int otherSymbols )
{

	//open file
		// function: openOutputFile()
	openOutputFile( outputFileName );

	//write stuff to file
	// function: writeStringToFile( const char *outString )
	// function: writeDoubleToFile( const char *outString )
	// function: writeEndlineToFile()
	writeStringToFile( "Total upper case letters : " );
	writeIntegerToFile( upperCaseLetters );
	writeEndlineToFile();


//write lowercase
	// function: writeDoubleToFile( const char *outString )
	writeStringToFile( "Total lower case letters : " );
	writeIntegerToFile( lowerCaseLetters );
	writeEndlineToFile();

// other symbols
	writeStringToFile( "Total other symbols      : " );
	writeIntegerToFile( otherSymbols );


	//close file
	closeOutputFile();
}
