/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/*

C Function Parameters
======================

Parameters and Arguments
--------------------------
Information can be passed to functions as a parameter. 
Parameters act as variables inside the function.

Parameters are specified after the function name, inside 
the parentheses. You can add as many parameters as you want, 
just separate them with a comma:

Syntax
-------

returnType functionName(parameter1, parameter2, parameter3,...etc) {
  // code to be executed
}

The following function that takes a string of characters with 
name as parameter. When the function is called, we pass along 
a name, which is used inside the function to print "Hello" and 
the name of each person.*/

#include <stdio.h>

void myFunction(char name[]) {
  printf("Hello %s\n", name);
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Hello Liam
// Hello Jenny
// Hello Anja
/*

When a parameter is passed to the function, it is called an 
argument. So, from the example above: name is a parameter, 
while Liam, Jenny and Anja are arguments.


Multiple Parameters
--------------------
Inside the function, you can add as many parameters as you want: */

#include <stdio.h>

void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old.

/*
Note that when you are working with multiple parameters, 
the function call must have the same number of arguments 
as there are parameters, and the arguments must be passed 
in the same order.


Return Values
----------------
The void keyword, used in the previous examples, indicates 
that the function should not return a value. If you want 
the function to return a value, you can use a data type 
(such as int or float, etc.) instead of void, and use the 
return keyword inside the function: */

#include <stdio.h>

int myFunction(int x) {
  return 5 + x;
}

int main() {
  printf("Result is: %d", myFunction(3));  // Outputs 8 (5 + 3)
  return 0;
}


/* This example returns the sum of a function with two parameters: */

#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("Result is: %d", myFunction(5, 3));  // Outputs 8 (5 + 3)
  return 0;
}


/* You can also store the result in a variable:  */

#include <stdio.h>

int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int result = myFunction(5, 3);
  printf("Result is = %d", result);  // Outputs 8 (5 + 3)
  return 0;
}

