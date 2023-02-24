#include <stdio.h>

/**
 * main - prints the fizz buzz test, followed by a new line
 * Return: 0 success
*/

int main(void)
{
      int x;

    for (x = 1; x <= 100; x++)
      {
	if (x % 3 == 0)
	    printf("FIZZ");
	else if(x % 5 == 0)
	    printf("BUZZ");
	else if(x % 3 == 0 && x % 5 == 0)
	    printf("FIZZBUZZ");
	else
	    printf("%d", x);
	printf(" ");
      }
    printf("\n");
    return (0);
}
