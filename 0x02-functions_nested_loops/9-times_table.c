#include "main.h"

/**
 * times_table - prints the 9 times table,starting with 0
 *
 */

void times_table(void)
{
      int index,num,val;

    for(index = 0; index <= 9; index++){
	for(num = 0; num <=9;num++){
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
	_putchar('\n');
    
}
