/*
Name: uploadDataIntoArray
Process: opens file for input, uploads values, and assigns
         these values to the array,
         counts the number of values, closes files,
         returns the number of values
Function Input/Parameters: file name (fileName[]) and
                           integer array (intArray[])
Function Output/Parameters: none
Function Output/Returned: size of array (int)
Device Input/HD: data uploaded from file
Device Output/Monitor: none
Dependencies: file input utility

The data file looks like this:
57058, 71605, 18857, 65564, 57970,
71160
Note: you don’t need to account for any data type other than that provided in
the data file.
Note: You are allowed to create necessary variables.
Note: Use of unspecified functions and/or data will result in a grade of zero
for this part.
Note: Only one return allowed
List of potentially useful functions:

bool openInputFile( const char *filename )
bool closeInputFile()
bool checkForFileOpen()
float readDoubleFromFile()
int readIntegerFromFile()
char readCharacterFromFile()
bool checkForEndOfInputFile()
*/

int uploadDataIntoArray( const char fileName, int intArray[])
  {
    //initialize variables
      // currentVal is an int because we were told to only account for
      // the variable types seen in the file, which are ints
    int currentVal, index = 0;

    //Check if we can open the file
      //function: openInputFile()
    if ( openInputFile( fileName ) )
      {
        //prime the loop
          //function: readIntegerFromFile()
          currentVal = readIntegerFromFile();

        //Loop to end of file
          //function: checkForEndOfInputFile()
          while( !checkForEndOfInputFile() )
            {
              //add value to int array
              intArray[ index ] = currentVal;

              //get the next value
                //function: readIntegerFromFile()
              currentVal = readIntegerFromFile();

              //increment the index
              index++;
            }
        //close input file
          //function: closeInputFile()
        closeInputFile();
      }
      //return number of items in list (same as index)
      return index;
  }
