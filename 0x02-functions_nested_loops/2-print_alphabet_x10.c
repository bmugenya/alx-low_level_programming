#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times,in lowercase,followed by a new line
 *
*/

void print_alphabet_x10(void)
{
        int x;
        int i = 1;
	while (i < 10)
	{
 	   for (x = 'a'; x <= 'z'; x++)
	     {
	       _putchar(x);
	     }
	   _putchar('\n');
	   i++;
	}
}
