#include "main.h"

/**
 * more_numbers - prints 10 timesthe numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
  int index, num;
  
    for(index = 0; index <= 9; index++)
      {
	for(num = 0; num <=14; num++)
	  {
	    if (num > 9)
	      _putchar(num / 10 + '0');
	    _putchar(num % 10 + '0');
	  }
	_putchar('\n');
     }
}
