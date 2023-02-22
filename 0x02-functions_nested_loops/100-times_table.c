#include "main.h"

/**
 * print_times_table - prints the 9 times table,starting with 0
 * @x:  number to be multiple by
 */

void print_times_table(int x)
{
      int index,num,val;
      if( x > 0 && x < 15)
	{
    for(index = 0; index <= x; index++){
	for(num = 0; num <=x;num++){
	    val = index * num;
	    if(val > 9){
	    _putchar(val / 10 + '0');
	    _putchar(val % 10 + '0');
            _putchar(',');
            _putchar(' ');
	    }else{
	     _putchar(val + '0');
            _putchar(',');
            _putchar(' ');
            _putchar(' ');
	    }
	}
    }
	_putchar('\n');
    }
}
