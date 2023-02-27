#include "main.h"

/**
* swap_int - swaps the values of two integers
* @a: pointer of type int
* @b: pointer of type int 
*/

void swap_int(int *a, int *b)
{
  int swap = *a;
  
  *a = *b;
  *b = swap;
}
