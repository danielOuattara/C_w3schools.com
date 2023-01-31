/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/* User Input
=============== */

#include <stdio.h>

int main()
{
   printf("\n");

   /*You have already learned that 'printf()' is used to output
   values in C.

   To get user input, you can use the 'scanf()' function: */

   // Create an integer variable that will store the number we get
   // from the user

   int myNum;

   // Ask the user to type a number
   printf("Type a number: \n");

   // Get and save the number the user types
   scanf("%d", &myNum);

   // Output the number the user typed
   printf("Your number is: %d\n", myNum);

   /*
   The 'scanf()' function takes two arguments:

    1- the format specifier of the variable (%d here)

    2- the reference operator (&myNum),which stores
       the memory address of the variable.

   Tip: You will learn more about memory addresses and
   functions in the next chapter.

   User Input Strings
   --------------------
   You can also get a string entered by the user: */

   // Create a string
   char firstName[30];

   // Ask the user to input some text
   printf("Enter your first name: \n");

   // Get and save the text
   scanf("%s", firstName);

   // Output the text
   printf("Hello %s.", firstName);

   /*
   NOTE:
   ----
   1- you must specify the size of the string/array we used a
      very high number, 30, but atleast then we are certain it
      will store enough characters for the first name

   2- you don't have to specify the reference operator (&)
      when working with strings in scanf().
   */

   return 0;
}