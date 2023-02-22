#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @x: natural number 
 */

void print_to_98(int x)
{
       while (x != 98)
       {
	 printf("%d", x);
         if (x < 98)
	  x++;
	 else if (x > 9)
	  x--;
	 printf(", ");
        
      }
	 printf("%d", 98);
	 printf("\n");
}
