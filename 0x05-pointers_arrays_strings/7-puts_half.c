#include "main.h"

/**
* puts_half - prints the second half of a string
* @str: - string to be print the second half
*/

void puts_half(char *str)
{
 int index, x;

 for (index = 0; str[index] != '\0'; index++);
 for (x = (index + 1) / 2; x < index; x++)
   _putchar(str[x]);
 _putchar('\n');
}
