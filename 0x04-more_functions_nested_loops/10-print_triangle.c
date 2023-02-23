#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line 
 */

void print_triangle(int size)
{
  if (size > 0)
    {
      int  i, j;
   
      for (i = 1; i <= size ; i++)
	{
	  for (j = size; j >= i; j--) 
	    _putchar(' ');
	  for (j = 1; j <= i; j++) 
	    _putchar('#');
	
	 _putchar('\n');
       }

    }
  _putchar('\n');

}
