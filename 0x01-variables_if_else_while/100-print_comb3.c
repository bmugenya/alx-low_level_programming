#include <stdio.h>
/**
 * 
 * main  - prints all possiblr different combinations of two digits
 *
 * Return: Always 0
 */

int main()
{
  int x,y;

    for (x = 0; i < 9; i++)
    {
      for (y = x + 1; y < 10; y++)
        {
	  if (x != 8 && y != 9)
	  { 
	    putchar(i + '0');
            putchar(y + '0');
	    putchar(',');
	    puchar(' ');
	  }   
        }
    }
    putchar('\n');
    return (0);
}
