/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/*C Functions
=============== */

#include <stdio.h>

void myFunction()
{
  printf("\nI just got executed!");
}

int main(int argc, char const *argv[])
{

  /*A function is a block of code which only runs when it is called.
  You can pass data, known as arguments, into a function.

  Functions are used to perform certain actions, and they are
  important for reusing code: define the code once, and use it many
  times.


  Predefined Functions
  ---------------------
  So it turns out you already know what a function is. You have been
  using it the whole time while studying this tutorial!

  For example, 'main()' is a function, which is used to execute code,
  and 'printf()' is a function; used to output/print text to the screen: */

  // int main() {
  //   printf("Hello World!");
  //   return 0;
  // }

  /* Create a Function
  ---------------------

  To create/declare your own function, specify the name of the function,
  followed by parentheses () and curly brackets {}:

  Syntax
  --------
  void myFunction() {
    // code to be executed
  }

  Example Explained
  ------------------
  - myFunction() is the name of the function
  - void means that the function does not have a return value.
  - Inside the body function, add code that defines what the function
    should do.


  Call a Function
  ----------------
  Declared functions are not executed immediately. They are "saved for
  later use", and will be executed when they are called.

  To call a function, write the function's name followed by two parentheses
  and a semicolon ;

  In the following example, 'myFunction' is used to print a text (the action),
  when it is called: */

  // Create a function
  // void myFunction()
  // {
  //   printf("\nI just got executed!");
  // }

  // Outputs "I just got executed!"

  /* A function can be called multiple times: */

  myFunction(); // call the function
  myFunction(); // call the function
  myFunction(); // call the function

  printf("\n");

  return 0;
}
