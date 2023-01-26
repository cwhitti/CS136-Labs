/*
You are to write the function displayData that accepts the head pointer as a
parameter and displays the linked list data with spaces between each character.
The function must also display “Empty Linked List” if there is no data in the
list. Node struct must be used with singleLinkNode type which contains two
components charData and *nextPtr.
The function int printf(const char *format, ...string parameters) and the
constant NULL may be used as needed for this part.
Note: Use of unspecified functions and/or data will result in a grade of zero
for this part.
*/

//Begin function
void displayData( singleLinkNode *headPtr )
  {
    //initialize variables
    singleLinkNode *traversePtr;

    //set traversePtr to beginning of list
    traversePtr = headPtr;

    //check if there are items in linked list
    if (traversePtr -> charData != NULL)
      {
        //print the value
          //function: printf
        printf("%c ", traversePtr -> charData);

        // increment the traversePtr
        traversePtr = *nextPtr;
      }
      //The linked list is empty
      else
      {
        //print error message
          //function: printf
        printf("Empty Linked List");
      }
  }
