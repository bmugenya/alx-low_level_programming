#include "main.h"
#include <unistd.h>

/**
 * main - prints _putchar
 *
 * Return: 0 (Success)
 */

int _putchar(char x)
{

  return (write(1, &x, 1));
}
