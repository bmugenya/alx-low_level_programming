#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: pointer to the array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
  int index, temp;

  for (index = 0; index < n / 2; index++)
    {
      temp = a[index];
      a[index] = a[n - index - 1];
      a[n - index - 1] = temp;
    }
}
