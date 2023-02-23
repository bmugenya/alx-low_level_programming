
#include "main.h"
#include <stdio.h>
/**
 * print_fizz_buzz - prints the fizz buzz test, followed by a new line
*/

void print_fizz_buzz(void)
{
      int x;

    for (x = 1; x <= 100; x++)
	if (x % 3 == 0)
	    printf("FIZZ ");
	else if(x % 5 == 0)
	    printf("BUZZ ");
	else if(x % 3 == 0 && x % 5 == 0)
	    printf("FIZZ BUZ ");
	else
	    printf("%d ", x);
    printf("\n");
}
