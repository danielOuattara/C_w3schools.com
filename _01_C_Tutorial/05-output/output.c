/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
28 Fev. 2022
---------------------------*/

/*
Output (Print Text)
====================

printf()
---------

The printf() function is used to output values/print text: */

// #include <stdio.h>

// int main()
// {
//   printf("Hello World!");
//   return 0;
// }

/*

You can add as many printf() functions as you want.
However, note that it does not insert a new line at
the end of the output: */

// #include <stdio.h>

// int main()
// {
//   printf("Hello World!");
//   printf("I am learning C.");
//   return 0;
// }

/*
 New Lines
-------------

To insert a new line, you can use the \n character: */

// #include <stdio.h>

// int main()
// {
//   printf("\n");
//   printf("Hello World!\n");
//   printf("I am learning C.\n");
//   return 0;
// }

/*
You can also output multiple lines with a single printf() function.
However, be aware that this will make the code harder to read: */

// #include <stdio.h>

// int main()
// {
//   printf("Hello World!\nI am learning C.\nAnd it is awesome!\n");
//   return 0;
// }

/* Tip: Two \n characters after each other will create a blank line: */

// #include <stdio.h>

// int main()
// {
//   printf("Hello World!\n\n");
//   printf("I am learning C.\n");
//   return 0;
// }

/*
What is \n exactly ?
----------------------

The newline character (\n) is called an escape sequence, and it forces
the cursor to change its position to the beginning of the next line on
the screen. This results in a new line.

Escape Sequence 	Description
------------------------------------------------------
\t 	              Creates a horizontal tab
------------------------------------------------------
\\ 	              Inserts a backslash character (\)
------------------------------------------------------
\" 	              Inserts a double quote character
------------------------------------------------------*/

#include <stdio.h>

int main()
{
  printf("Hello World!\n\n");
  printf("Who are you ? \tWhat are you doing ?\n");
  printf("I am \"Daniel Ouattara\". \tI am learning C.\n");
  printf("I am live in France. And you ?\n");
  return 0;
}
