/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
28 Fev. 2022
---------------------------*/

/* Data Types
=============

As explained in the Variables chapter, a variable in C must be
a specified data type, and you must use a format specifier inside
the printf() function to display it: */

#include <stdio.h>

int main()
{
    // Create variables
    short int myNum = 5;                     // Integer (whole number)
    float myFloatNum = 5.99;                 // Floating point number
    char myLetter = 'D';                     // Character
                                             // String me = "Daniel";
    double pi = 3141.59236363e-3;            // double
    double moonSunDistance = 11440331551513; // int

    // Print variables
    printf("%hd\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("%lf\n", pi);
    printf("%f\n", moonSunDistance);
}

/* Basic Data Types
-------------------

The data type specifies the size and type of information the variable
will store. In this tutorial, we will focus on the most basic ones:

Data Type 	Size 	Description
------------------------------------------------------------------------------------------
int 	   4 bytes 	Stores whole numbers, without decimals
------------------------------------------------------------------------------------------
float 	   4 bytes 	Stores fractional numbers, containing one or more decimals.
                    Sufficient for storing 7 decimal digits
------------------------------------------------------------------------------------------
double 	   8 bytes 	Stores fractional numbers, containing one or more decimals.
                    Sufficient for storing 15 decimal digits
------------------------------------------------------------------------------------------
char 	   1 byte 	Stores a single character/letter/number, or ASCII values
------------------------------------------------------------------------------------------


Basic Format Specifiers
---------------------------
There are different format specifiers for each data type. Here are some of them:

----------------------------------------------
Format Specifier 	Data Type
----------------------------------------------
%d or %i 	        int
----------------------------------------------
%f 	                float
----------------------------------------------
%lf 	            double
----------------------------------------------
%c 	                char
----------------------------------------------
%s 	                Used for strings, which
                    you will learn more about
                    in a later chapter
----------------------------------------------



Here's a table containing commonly used types in C programming for quick access.

Type                    Size (bytes)                Format Specifier
------                  --------------              ----------------
--------------------------------------------------------------------
int                     at least 2, usually 4       %d, %i
--------------------------------------------------------------------
char                    1                           %c
--------------------------------------------------------------------
float                   4                           %f
--------------------------------------------------------------------
double                  8                           %lf
--------------------------------------------------------------------
short int               2 usually                   %hd
--------------------------------------------------------------------
unsigned short int      2                           %hu
--------------------------------------------------------------------
unsigned int            at least 2, usually 4       %u
--------------------------------------------------------------------
long int                at least 4, usually 8       %ld, %li
--------------------------------------------------------------------
long long int           at least 8                  %lld, %lli
--------------------------------------------------------------------
unsigned long int       at least 4                  %lu
--------------------------------------------------------------------
unsigned long long int  at least 8                  %llu
--------------------------------------------------------------------
signed char             1                           %c
--------------------------------------------------------------------
unsigned char           1                           %c
--------------------------------------------------------------------
long double             at least 10,                %Lf
                        usually 12 or 16
--------------------------------------------------------------------


Different data types also have different ranges up to which they can
store numbers. These ranges may vary from compiler to compiler.

Below is a list of ranges along with the memory requirement and format
specifiers on the 32-bit GCC compiler.


Data Type               Memory(bytes)    Range                           Format Specifier
--------------------------------------------------------------------------------------------
short int                   2            -32,768 to 32,767                   %hd
--------------------------------------------------------------------------------------------
unsigned short int          2            0 to 65,535                         %hu
--------------------------------------------------------------------------------------------
unsigned int                4            0 to 4,294,967,295                  %u
--------------------------------------------------------------------------------------------
int                         4            -2,147,483,648 to 2,147,483,647     %d
--------------------------------------------------------------------------------------------
long int                    4            -2,147,483,648 to 2,147,483,647     %ld
--------------------------------------------------------------------------------------------
unsigned long int           4            0 to 4,294,967,295                  %lu
--------------------------------------------------------------------------------------------
long long int               8            -(2^63) to (2^63)-1                 %lld
--------------------------------------------------------------------------------------------
unsigned long long int      8            0 to 18,446,744,073,709,551,615     %llu
--------------------------------------------------------------------------------------------
signed char                 1            -128 to 127                         %c
--------------------------------------------------------------------------------------------
unsigned char               1            0 to 255                            %c
--------------------------------------------------------------------------------------------
float                       4            1.2E-38 to 3.4E+38	                 %f
--------------------------------------------------------------------------------------------
double                      8            1.7E-308 to 1.7E+308	             %lf
--------------------------------------------------------------------------------------------
long double                 16           3.4E-4932 to 1.1E+4932	             %Lf
--------------------------------------------------------------------------------------------




















*/
