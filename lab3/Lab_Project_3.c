#include "Console_IO_Utility.h"




const char TOP_LINE[]
                = "==========================================================";
const char THICK_LINE_DIVIDER[]
                = "|========================================================|";
const char THIN_LINE_DIVIDER[]
                = "|--------------------------------------------------------|";
const int TWO_ENDLINES = 6;

const int TABLE_WIDTH = 58;

const int ACCELERATION_WIDTH = 7;

const int VELOCITY_WIDTH = 12;

const int TIME_WIDTH = 10;

const int FORCE_WIDTH = 10;

const char PIPE_SPACE[] = "|   ";

const char SPACE_PIPE[] = "   |";

int main()
    {

     // Initialize Variables
         double initialSpeed, velocity, accelertion, force;
         int mass, time;


     // Show Title
          // Functions: printEndline(), printString(),
        printEndline();
        printString("MOTION CALCULATOR");
        printEndline();
        printEndline();
        printString(TOP_LINE);
        printEndline();





     // Get user input
     // Section Title
     printEndline();
     printString("Provide the information below for the object");
     printEndline();
          // Functions: promptForDouble, printEndline
          printEndline();
          initialSpeed = promptForDouble("Initial Speed(m\\s): ");
          printEndline();
          velocity = promptForDouble("Velocity(m\\s): ");
          printEndline();
          time = promptForDouble("Time to reach destination(s): ");
          printEndline();
          mass = promptForDouble("Mass(Kg): ");
          printEndline();
          printEndline();






     // Do the calculation
     // Remember Newtons Law for Motion and Force
     // Motion: v = u + a*t; v= velocity, u= initial speed, t= time;
     // Force: F = m*a; m = mass, a= accelertion
     accelertion = (velocity - initialSpeed) / time;

     force = mass * accelertion;




     // show results
     // display results
     // This portion of the code creates the top portion of the Table

         printEndline(TWO_ENDLINES);
         printString(TOP_LINE);
         printEndline();
         printCharacter(PIPE);
         printStringJustified( "MOTION CALCULATOR",
                                                  TABLE_WIDTH - 2, "CENTER" );
         printCharacter(PIPE);
         printEndline();
         printString(THICK_LINE_DIVIDER);
         printEndline();

     // this portion of the code creates the middle section of the output
         printString( PIPE_SPACE );
         printStringJustified( "Velocity", VELOCITY_WIDTH - 1, "LEFT" );
         printCharacter( PIPE );
         printStringJustified( "Time", TIME_WIDTH, "CENTER" );
         printString( PIPE_SPACE );
         printStringJustified( "Accelertion", ACCELERATION_WIDTH - 2, "CENTER" );
         printString( SPACE_PIPE );
         printStringJustified( "Force", FORCE_WIDTH - 1, "CENTER" );
         printString( SPACE_PIPE );
         printEndline();
         printString(THICK_LINE_DIVIDER);
         printEndline();

     // This protion of the code creates the bottome section of the code
          // Functions: pritnString, printDobleJustified, printCharacter, printEndline
          printString(PIPE_SPACE);
          printDoubleJustified( velocity, PRECISION, VELOCITY_WIDTH-1, "LEFT" );
          printString( PIPE_SPACE );
          printDoubleJustified( time, PRECISION, TIME_WIDTH-3, "LEFT" );
          printString( PIPE_SPACE );
          printDoubleJustified( accelertion, PRECISION, ACCELERATION_WIDTH+4,
                                "CENTER" );
          printString( SPACE_PIPE );
          printDoubleJustified( force, PRECISION, FORCE_WIDTH - 1,
                                "CENTER" );
          printString( SPACE_PIPE );
          printEndline();
          printString(THIN_LINE_DIVIDER);
          printEndline();






     // End program
         return 0;


    }
