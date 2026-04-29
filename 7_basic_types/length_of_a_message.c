#include <stdio.h>

int main(void) {
  int count = 0;

  printf("Enter a message: ");
  while (getchar() != '\n') {
    count++;
  }

  printf("Length of message: %d\n", count);

  return 0;
}