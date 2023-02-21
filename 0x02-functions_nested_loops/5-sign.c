#include "main.h"

/**
 * _print_sign - prints the sign of a number
 * @x : number to be assigned
 * 
 * Return: 1 if number is positive, 0if number is 0, and -1 is negative */

int _print_sign(int x)
{
  if (x == 0)
    {
    _putchar('0');
    return (0);
    }
  else if(x < 0)
    {
    _putchar('-');
    return (-1);
    }
  else
    {
     _putchar('+');
     return (1);
    }
}
