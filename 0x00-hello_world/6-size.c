#include <stdio.h>

int main(){
  char charSize;
  int intSize;
  long int lintSize;
  long long int llintSize;
  float floatSize;

  printf("Size of a char: %zu byte(s)\n",sizeof(charSize));
  printf("Size of an int: %zu byte(s)\n",sizeof(intSize));
  printf("Size of a long int: %zu byte(s)\n",sizeof(lintSize));
  printf("Size of a long long int: %zu byte(s)\n",sizeof(llintSize));
  printf("Size of a float: %zu byte(s)\n",sizeof(floatSize));
  return 0;
}
