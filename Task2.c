/*
Name: calculateTotalInLinkedList
Process: given header to linked lists, traverses the list while accessing
         data adds integer values to the total sum of values, returns the
         total sum (totalSum)
Function Input/Parameters: pointer to the head of the list (*currentNode)
Function Output/Parameters: none
Function Output/Returned: total sum (totalSum)
Device Input/Keyboard:  none
Device Output/Monitor: none
Dependencies: none

Note: Node struct defined as singleLinkNode type and contains two components
data and *nextPtr.
Note: you are allowed to initialize/define no more than one variable.
Note: Use of unspecified functions and/or data will result in a grade of
zero for this part.
Note: Only one return allowed

*/

//begin function
int calculateTotalInLinkedList( singleLinkNode *currentNode )
  {
    //initialize variables
    int totalSum = 0;

    //loop while the current item is not NULL
    while( currentNode -> data != NULL )
      {
        //add current value to total
        totalSum += currentNode -> data;

        //increment the pointer to the next position
        currentNode = *nextPtr;
      }
    //return the summed values
    return totalSum;
  }
