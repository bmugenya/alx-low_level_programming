#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (last_digit > 5)
	  printf("Last digit of %d is and is grater than 5/n", n);
	else if (last_digit < 6 && last_digit != 0)
	  printf("Last digit of %d is and is less than 6 and not 0\n", n);
	else
	  printf("Last digit of %d is and is 0\n", n);
	return (0);
}
