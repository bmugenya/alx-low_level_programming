#include "main.h"


/**                                                                                                                                           
 * _is_prime - checks if a given number is a prime number                                                                                     
 * @n: given number 
 * @x: divisor                                                                                                                                 
 * Return: 1 if the input integer is a prime number, otherwise return 0      
*/
int _is_prime(int n, int x)
{
  if (x * x > n)
    return (1);
  else if (n %  x == n)
    return (0);
  return (_is_prime(n, x + 1));
}



/**
 * _is_prime_number - checks if a given number is a prime number
 * @n: given number
 * Return: 1 if the input integer is a prime number, otherwise return 0 
*/

int _is_prime_number(int n)
{
  if (n <=1)
    return (0);
  return (_is_prime(n, 2));
}
