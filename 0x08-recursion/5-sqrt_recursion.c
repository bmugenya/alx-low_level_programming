#include "main.h"


/**                                                                                                                                           
 * _sqrtf - returns the natural square root of a  number                                                                                     
 * @n: given number 
 * @x: given number                                                                                                                                 
 * Return: square root of a number                                                                                                                 
*/
int _sqrtf(int n, int x)
{
  if (x * x > n)
    return (-1);
  else if (x * x == n)
    return (x);
  return (_sqrtf(n, x + 1));
}



/**
 * _sqrt_recursion - returns the natural square root of a  number
 * @n: given number
 * Return: square root of a number 
*/

int _sqrt_recursion(int n)
{
  return (_sqrtf(n, 1));
}
       
