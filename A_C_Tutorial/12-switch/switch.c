/*---------------------------
Daniel.B OUATTARA
C Tutorial w3schools.com/c/
daniel.ouattara[@]gmxDOTcom
13 Mars. 2022
---------------------------*/

/* Switch Statement
==================== */

#include <stdio.h>

int main()
{

  /* Instead of writing many if..else statements, you can use the
  switch statement.

  The switch statement selects one of many code blocks to be executed:

  Syntax
  -------

  switch(expression) {
    case x:
      // code block to be executed
      break;
    case y:
      // code block to be executed
      break;
    default:
      // code block to be executed
  }

  This is how it works:

   > The switch expression is evaluated once
   > The value of the expression is compared with the values of each case
   > If there is a match, the associated block of code is executed
   > The break statement breaks out of the switch block and stops the execution
   > The default statement is optional, and specifies some code to run if there is no case match

  The example below uses the weekday number to calculate the weekday name: */

  short int day = 4;

  switch (day)
  {
  case 1:
    printf("\nMonday");
    break;
  case 2:
    printf("\nTuesday");
    break;
  case 3:
    printf("\nWednesday");
    break;
  case 4:
    printf("\nThursday");
    break;
  case 5:
    printf("\nFriday");
    break;
  case 6:
    printf("\nSaturday");
    break;
  case 7:
    printf("\nSunday");
    break;
  }

  /*
  // Outputs "Thursday" (day 4)


  The break Keyword
  ------------------

  When C reaches a break keyword, it breaks out of the switch block.
  This will stop the execution of more code and case testing inside
  the block. When a match is found, and the job is done, it's time
  for a break. There is no need for more testing. A break can save
  a lot of execution time because it "ignores" the execution of all
  the rest of the code in the switch block. The default Keyword

  The default keyword specifies some code to run if there is no case
  match: */

  day = 4;
  switch (day)
  {
  case 6:
    printf("\nToday is Saturday");
    break;
  case 7:
    printf("\nToday is Sunday");
    break;
  default:
    printf("\nLooking forward to the Weekend");
  }

  printf("\n");
  return 0;
}

/*

// Outputs "Looking forward to the Weekend"

Note: The default keyword must be used as the last statement
in the switch, and it does not need a break. */