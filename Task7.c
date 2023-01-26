/*
You are to write function countNodes that initially accepts the head pointer
of a linked list as a parameter and NON-recursively counts the number of nodes
in the linked list. This function must handle the empty list condition as well
as any other sized list. Node struct must be used with singleLinkNode type which
contains two components charData and *nextPtr.
The constant NULL may be used as needed.
Note: you may create needed variables for this function.
Note: Use of unspecified functions and/or data will result in a grade of zero
for this part.
Note: Multiple returns allowed
*/
int countNodes( singleLinkNode *headPtr )
  {
    //initialize Variables
    singleLinkNode *traversePtr;
    int count = 0;

    //set traversePtr to beginning of linked list
    traversePtr = headPtr;

    // See if there is data in the linked list,
      // begin while loop if so
    while ( traversePtr -> charData != NULL )
      {
        // increment count
        count++;

        // Go to the next pointer
        traversePtr = *nextPtr;
      }

    //end function
      // This handles the empty list case because it returns 0 if nothing is
      // in the list.
    return count;
  }
