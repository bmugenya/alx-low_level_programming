
#include "main.h"

/**
* print_array - prints n elements of an array of integer, folled by a new line
* @a: array
* @n: the number of elelemts of the array
*/

void print_array(int *a, int n)
{
  int index;

  for (index = 0; index < n; index++)
    {
      printf("%d", a[index]);

      if (index != n - 1)
	print(", ");
    }
	 printf("\n");
}
