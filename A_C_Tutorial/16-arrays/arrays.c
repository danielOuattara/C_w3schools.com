/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/* Arrays
========== */

#include <stdio.h>

int main(int argc, char const *argv[])
{

  /* Arrays are used to store multiple values in a single variable,
  instead of declaring separate variables for each value.


  Create an array
  -----------------
  To create an array, define the data type (like int) and specify
  the name of the array followed by square brackets [].

  To insert values to it, use a comma-separated list, inside curly
  braces: */

  short int myNumbers[] = {25, 50, 75, 100};

  /* We have now created a variable that holds an array of four
  integers.


  Access the Elements of an Array
  --------------------------------
  To access an array element, refer to its index number.
  Array indexes start with 0: [0] is the first element.
  [1] is the second element, etc.

  This statement accesses the value of the first element [0]
  in myNumbers: */

  printf("%d\n", myNumbers[0]); // Outputs 25

  printf("The second array item is %d\n", myNumbers[1]);

  /* Change an Array Element
  ------------------------
  To change the value of a specific element, refer to the index number: */

  myNumbers[0] = 33;
  printf("%d\n", myNumbers[0]); // Now outputs 33 instead of 25

  printf("--------------------\n");

  /* Loop Through an Array
---------------------------
You can loop through the array elements with the 'for loop'.
The following example outputs all elements in the myNumbers array: */

  short int i = 0;
  for (i; i < 4; i++)
  {
    printf("%d\n", myNumbers[i]);
  }
  printf("--------------------\n");

  /* Set Array Size
  ------------------
  Another common way to create arrays, is to specify the size of
  the array and add elements later: */

  // Declare an array of four integers:
  short int myNumbers2[6];

  // Add elements
  myNumbers2[0] = 0;
  myNumbers2[1] = 10;
  myNumbers2[2] = 20;
  myNumbers2[3] = 30;
  myNumbers2[4] = 40;
  myNumbers2[5] = 50;

  // loop through myNumbers

  printf("sizeof(int) = %d\n", sizeof(int));
  printf("sizeof(short int) = %d\n", sizeof(short int));

  size_t myNumbers2_size = sizeof(myNumbers2) / sizeof(myNumbers2[0]);

  i = 0;
  for (i; i < myNumbers2_size; i++)
  {
    printf("%d\n", myNumbers2[i]);
  }
  printf("--------------------\n");

  /* Using this method, you have to know the size of the array,
  in order for the program to store enough memory.

  IMPORTANT:  You are not able to change the size of the array after creation. */

  return 0;
}