#include <math.h>
#include <stdio.h>
#include "Console_IO_Utility.h"

int main()

{

//Display title
printString("Rounding Program") ;
printEndline() ;
printString("================") ;
printEndline() ;
printEndline() ;

//Ask for input, intialize val1 and val2
double val1 = promptForDouble("Enter a value to be rounded: ") ;

//initialize constant
const double CHECK_ROUND = 0.5 ;

//rounding math
   //if val1 is within .5 of the next integer, val1 will be pushed up to the next
   //integer by being casted as an integer.
   //Otherwise, val1 will be pushed down
val1 = (int)(val1 + CHECK_ROUND) ;

//output
printString("The rounded value is now: ") ;
printDouble(val1,2) ;
printEndline() ;
printEndline() ;
printString("Program End") ;
printEndline() ;

return 0;
}
