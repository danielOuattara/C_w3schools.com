/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
02 Mars. 2022
---------------------------*/

/* Constants
=============

When you don't want others/yourself to override existing variable values,
use the "const" keyword . This will declare the variable as "constant",
which means unchangeable and read-only:
*/

#include <stdio.h>
int main()
{
    const short int myNum = 15; // myNum will always be 15
    // myNum = 10;           // error: assignment of read-only variable 'myNum'

    printf("%hd\n", myNum, "\n");

    /*
    You should always declare the variable as constant when you have values
    that are unlikely to change: */

    const short int minutesPerHour = 60;
    const float PI = 3.14;

    /* Notes On Constants
     ---------------------
     When you declare a constant variable, it must be assigned with a value:

     // const int minutesPerHour = 60;

     This however, will not work:

     // const int minutesPerHour;
     //minutesPerHour = 60; // error


     Good Practice
     ----------------
     Another thing about constant variables, is that it is considered good
     practice to declare them with uppercase. It is not required, but useful
     for code readability and common for C programmers:*/

    const short int BIRTHYEAR = 1980;

    return 0;
}