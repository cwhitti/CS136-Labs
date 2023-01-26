/*
Name: calculateTotalInArray
Process: given 1-D Array, iterates over integer values via ‘for’ loop,
          adds values together, and returns the total sum (totalSum)
Function Input/Parameters: array (intArray[]) and array size (arraySize)
Function Output/Parameters: none
Function Output/Returned: total some (totalSum)
Device Input/HD: none
Device Output/Monitor: none
Dependencies: none
*/

int calculateTotalInArray( int intArray[], int arraySize)
{
  //initialize variables
    //you are allowed to initialize/define no more than two variables
  int index, totalSum = 0;

  //Loop through the array while it is less than array size
  for (index = 0; index < arraySize; index++)
    {
      //Add number to sum
      totalSum += intArray[ index ];
    }
    //return the total
    return totalSum;
}
