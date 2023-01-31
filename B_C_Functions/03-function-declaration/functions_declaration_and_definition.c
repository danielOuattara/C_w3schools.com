/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
15 Mars. 2022
---------------------------*/

/* Function Declaration and Definition
======================================

You just learned from the previous chapters that you
can create and call a function it the following way: */

// #include <stdio.h>

// void myFunction() {  // Create a function
//   printf("I just got executed!");
// }

// int main() {
//   myFunction(); // call the function
//   return 0;
// }

/* A function consist of two parts:

 >  Declaration: the function's name, return type, and parameters (if any)
 >  Definition: the body of the function (code to be executed)


void myFunction() {   // declaration
    code code ...     // the body of the function (definition)
}


For code optimization, it is recommended to separate the
declaration and the definition of the function.

You will often find C programs that have function declaration
above main(), and function definition below main(). This will
make the code better organized and easier to read:  */

// void myFunction();  // Function declaration

// int main() {  // The main method
//   myFunction();  // call the function
//   return 0;
// }

// void myFunction() {  // Function definition
//   printf("I just got executed!");
// }

/* Another Example

If we use the example from the previous chapter regarding
function parameters and return values: */

// #include <stdio.h>

// int myFunction(int x, int y) {
//   return x + y;
// }

// int main() {
//   int result = myFunction(5, 3);
//   printf("Result is = %d", result);  // Outputs 8 (5 + 3)
//   return 0;
// }

/* It is considered good practice to write it like this instead:*/

#include <stdio.h>

int myFunction(int, int); // Function declaration
void summer();
int sum_result();

int main()
{                                // The main method
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d\n", result);

  summer();

  int sum = sum_result();
  printf("%d\n", sum);
  return 0;
}

int myFunction(int x, int y)
{ // Function definition
  return x + y;
}

void summer()
{
  int firstInteger;
  printf("choose an integer: ");
  scanf("%d", &firstInteger);
  int secondInteger;
  printf("chose another integer: ");
  scanf("%d", &secondInteger);

  int sum = firstInteger + secondInteger;
  printf("The result of %d + %d is %d \n", firstInteger, secondInteger, sum);
}

int sum_result()
{
  int number1;
  printf("choose an integer: ");
  scanf("%d", &number1);
  int number2;
  printf("chose another integer: ");
  scanf("%d", &number2);
  return number1 + number2;
}