// header files
#include "Console_IO_Utility.h"
#include <math.h>  // for trig functions

// global constants
//const int DEGREES_IN_TRIANGLE = 180;
//const double ANGEL_C_DEG = 90;
const double CONSTANT_PI = 3.141592654;


const int TWO_ENDLINES = 2;
const int TABLE_WIDTH = 32;
const int DATA_NAME_WIDTH = 16;
const int VALUE_WIDTH = 16;

const char TOP_LINE[] = "===================================";
const char THICK_LINE_DIVIDER[] = "|=================================|";
const char THIN_LINE_DIVIDER[] = "|---------------------------------|";


// prototypes
void printTopLine();
void printThickDividerLine();
void printThinDividerLine();


// main program
int main()
   {
     //initialize variables
     double radius, area;

     //program Header
      //functions: printEndline(), printEndlines(), printString()
     printEndline();
     printString("Circle Area Calculator");
     printEndline();
     printString( TOP_LINE );
     printEndlines( TWO_ENDLINES );
     printString("Enter required information \n");

     //get input
       //function: promptForDouble()
     radius = promptForDouble("Enter the radius of the circle: ");

     //process DATA
     area = radius * radius * CONSTANT_PI ;

     //show results

        // result header
          // functions: printEndline(), printEndlines(), printCharacter(),
          // printStringJustified() printThinDividerLine()
     printEndlines( TWO_ENDLINES );
     printTopLine();
     printEndline();
     printCharacter( PIPE );

     printStringJustified("Data Results", TABLE_WIDTH + 1, "CENTER");

     printCharacter( PIPE );
     printEndline();

     //Divide sections
       //functions: printThinDividerLine(), printEndline()
     printThinDividerLine();
     printEndline();

        //radius portion
          //functions: printEndline(), printEndlines(), printCharacter(),
          //printStringJustified() printThinDividerLine()
     printCharacter( PIPE );
     printCharacter( SPACE );

     printStringJustified("Radius", DATA_NAME_WIDTH - 1, "CENTER");

     printCharacter( PIPE );

     printDoubleJustified(radius, PRECISION, VALUE_WIDTH - 1, "RIGHT");

     printCharacter( SPACE );
     printCharacter( PIPE );
     printEndline();

     //Divide sections
       //functions: printThinDividerLine(), printEndline()
     printThinDividerLine();
     printEndline();

        //data portion
          //functions: printEndline(), printEndlines(), printCharacter(),
          //printStringJustified() printThinDividerLine()
     printCharacter( PIPE );
     printCharacter( SPACE );

     printStringJustified( "Area", DATA_NAME_WIDTH - 1, "CENTER" );

     printCharacter( PIPE );

     printDoubleJustified(area, PRECISION, VALUE_WIDTH - 1, "RIGHT");

     printCharacter( SPACE );
     printCharacter( PIPE );
     printEndline();

     //Divide sections
       //functions: printThinDividerLine(), printEndline()
     printThinDividerLine();
     printEndlines( TWO_ENDLINES );

     //end program
      //function: printString()
     printString("End Program \n");

     //return 0
     return 0;
   }

// supporting functions

void printThickDividerLine()
   {
    // display thik line divider
         // functions: printString
    printString(THICK_LINE_DIVIDER);
   }

void printThinDividerLine()
   {
    // display thin line divider
         // functions: printString
    printString(THIN_LINE_DIVIDER);
   }

void printTopLine()
   {
      // display top line
         // functions: printString
    printString(TOP_LINE);
   }
