#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: integer to detrmine the size of square
 */

void print_square(int size)
{
      int index, num;

      if (size > 0)
	{
	  for(index = 0; index < size; index++)
	    {
	      for(num = 0; num < size; num++)
		{
		  _putchar('#');
		}
	      _putchar('\n');
	    }
	}
      else
	{
	  _putchar('\n');
	}
}
