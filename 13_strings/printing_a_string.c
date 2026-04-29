#include <stdio.h>

int main(void) {
  char* p = "Hello, World!";

  // Here, p is pointing to the first letter, that is 'H'

  while (*p) {
    printf("%c", *p++);
  }
  printf("\n");
  printf("%c", p[1]);
  printf("\n");

  return 0;
}