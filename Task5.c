/*
You are to write the function isInString that accepts as parameters a character
array (testStr[]) used as a c-style string, and a character (testChar).
The function searches through the string for the character. If the character
is found in the string, the function returns true; otherwise, it returns false.
Note: No function dependencies are allowed in this function but the NULL_CHAR
constant may be used as needed.
Note: you are allowed to initialize/define no more than one variable.
Note: Multiple returns allowed.
Note: Use of unspecified functions and/or data will result in a grade of zero
for this part.
*/

bool isInString( char testStr[], char testChar )
{
  //initialize variables
  int index = 0;

  //loop until we hit NULL_CHAR
  while ( testStr[ index ] != NULL_CHAR )
   {
    // test if the current value equals test char
    if ( testStr[ index ] == testChar )
      {
        // return true if same
        return true;
      }
    // then they are not the same chars, increment index and try again
    index++;
   }
   // no same char has been detected, return false
   return false;
}
