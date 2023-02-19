#include <stdio.h>

/** 
 * main - prints all possible different combinations of two two-digit numbers
 *
 * Return: Always 0
 */

int main()
{
  int x,y;

    for (x = 0; x < 98; x++)
    {
      for (y = x + 1; y < 99; y++)
        {
	    putchar(x / 10 + '0');
            putchar(x % 10 + '0');
            putchar(' ');
            putchar(y / 10 + '0');
            putchar(y % 10 + '0');

            if (x == 98 &&  y == 99)
	      break;
	    
	    putchar(',');
	    putchar(' ');
	    
        }
    }
    putchar('\n');
    return (0);
}
