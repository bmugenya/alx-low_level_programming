#include <stdio.h>

/** 
 * main - prints all possiblr different combinations of two digits
 *
 * Return: Always 0
 */

int main()
{
  int x,y;

    for (x = 0; x < 9; x++)
    {
      for (y = x + 1; y < 10; y++)
        {
	 
	    putchar(x + '0');
            putchar(y + '0');
	    if (x == 8 && y == 9)
	      break;
	    
	    putchar(',');
	    putchar(' ');
	    
        }
    }
    putchar('\n');
    return (0);
}
