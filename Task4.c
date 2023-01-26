/*
You are to write the function isNoneCapitalLetter and enumerator.
The enumerator constant will have two values PASS and FAIL.
The function accepts any character as a parameter but only returns a PASS if a
lower-case letter is provided/passed. If any character other than a lower-case
letter is provided/passed to the function, it returns FAIL.
Note: You are allowed to create necessary variables.
Note: Only one if statement is allowed
Note: Multiple returns allowed
Note: Use of unspecified functions and/or data will result in a grade of zero
for this part.
*/

//create enumerator
typedef enum { PASS, FAIL } caseStatus;

//Begin function
int isNoneCapitalLetter( char testChar )
  {
    //initialize variables
    int charStatus = FAIL;

    //test if character is lowercase
      // AKA between 'a' and 'z'
    if ( ( testChar >= 'a' ) && ( testChar <= 'z' ) )
      {
        //set flag to PASS
        charStatus = PASS;
      }

    //return the status
    return charStatus;
  }
