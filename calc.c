/******************************************************************************

                                                 
||\   /||`                       .|''''|,
 ||\\.//||   ''            ''     ||    ||
 ||     ||   ||  `||''|,   ||     ||    ||
 ||     ||   ||   ||  ||   ||     ||    ||
.||     ||. .||. .||  ||. .||.    `|....|'       

my own systeme .... calc app

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>




int
main ()
{

  printf ("---------------------------------------\n");

  printf (""""                      calc                  ");

  printf ("---------------------------------------\n");

  printf ("[ number 1 ] + * / - [number2]\n\n");

  int num1, num2, result;
  char op;

  scanf ("%d %c %d", &num1, &op, &num2);

  /* use swith case */
  switch (op)
    {
    case '+':
      result = num1 + num2;
      break;

    case '-':
      result = num1 - num2;
      break;

    case '*':
      result = num1 * num2;
      break;

    case '/':
      result = num1 / num2;
      break;

    default:
      printf ("Invalid operator");
    }

  /* Prints the result */
  printf ("%d %c %d = %d", num1, op, num2, result);
}
