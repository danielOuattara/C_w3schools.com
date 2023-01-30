/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
28 Fev. 2022
---------------------------*/

/* C Variables
===============

Variables are containers for storing data values.

In C, there are different types of variables, defined with different keywords:
> int   - stores integers (whole numbers), without decimals, such as 123 or -123
> float - stores floating point numbers, with decimals, such as 19.99 or -19.99
> char  - stores single characters, such as 'a' or 'B'.
          Char values are surrounded by single quotes


Declaring (Creating) Variables
--------------------------------
To create a variable, specify the type and assign it a value:
Syntax: <type> <variableName> = <value>;

Where
- type is one of C types (such as int),
- variableName is the name of the variable (such as x or myName).
- the equal sign is used to assign a value to the variable.


So, to create a variable that should store a number,
look at the following example: */

// #include <stdio.h>

// int main()
// {
//    int myNumber = 15;
// }

/* You can also declare a variable without assigning the value,
and assign the value later: */

// #include <stdio.h>

// int main()
// {
//    int myNumber;
//    myNumber = 15;
// }

/* Note: If you assign a new value to an existing variable, it will
         overwrite the previous value: */

// #include <stdio.h>

// int main()
// {
//    int myNum = 15; // myNum is 15
//    myNum = 10;     // Now myNum is 10
// }

/* Output Variables
--------------------
You learned from the output chapter that you can output
values OR print text with the printf() function:

// printf("Hello World!");

In many other programming languages (like Python, Java, and C++),
you would normally use a print() function to display the value of
a variable too. However, this is not possible in C: */

// #include <stdio.h>

// int main()
// { /* ERROR */
//    int myNum = 15;
//    printf(myNum); // error
// }

/* To output variables in C, you must get familiar with something called
"format specifiers".

Format Specifiers
-------------------
They are used together with the 'printf()' function to tell the compiler
what type of data the variable is storing. A 'format specifier' starts
with a percentage sign %, followed by a character.

For example, to output the value of an 'int' variable, you must use the
format specifier "%d" or "%i" surrounded by double quotes, inside the printf()
function: */

// #include <stdio.h>

// int main()
// { // OK
//    int myNum = 15;
//    printf("%d\n", myNum); // Outputs 15
//    printf("%i", myNum);   // Outputs 15
// }

/*
To print other types, use the format specifier "%c" for char and "%f" for float: */

// #include <stdio.h>

// int main()
// { // OK
//    // Create variables
//    int myNum = 5;           // Integer (whole number)
//    float myFloatNum = 5.99; // Floating point number
//    char myLetter = 'D';     // Character

//    // Print variables
//    printf("%d\n", myNum);
//    printf("%f\n", myFloatNum);
//    printf("%c\n", myLetter);
// }

/* You will learn more about Data Types in the next chapter.

Add Variables Together
------------------------

To add a variable to another variable, you can use the + operator */

// #include <stdio.h>

// int main()
// { // OK
//    int x = 5;
//    int y = 6;
//    int sum = x + y;
//    printf("%d", sum);
// }

/* Multiple Multiple Variables
-----------------------------

To declare more than one variable of the same type, use a comma-separated
list: */

// #include <stdio.h>

// int main()
// { // OK
//    int x = 5, y = 6, z = 50;
//    printf(" sum = %d", x + y + z);
//    printf("\n");
// }

/*
C Variable Names
-----------------

All C variables must be identified with unique names.
These unique names are called identifiers.

Identifiers can be short names (like x and y) or more descriptive
names (age, sum, totalVolume).

Note: It is recommended to use descriptive names in order to create
understandable and maintainable code:

int minutesPerHour = 60;  // Good
int m = 60;  // OK, but not so easy to understand what m actually is

The general rules for naming variables are:
   > Names can contain letters, digits and underscores
   > Names must begin with a letter or an underscore (_)
   > Names are case sensitive (myVar and myvar are different variables)
   > Names cannot contain whitespaces or special characters like !, #, %, etc.
   > Reserved words (such as int) cannot be used as names

*/
