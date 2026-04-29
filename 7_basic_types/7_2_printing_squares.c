#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int i = 1;

  while (true) {
    while (i % 25 == 0 && getchar() != '\n') {
      printf("Press Enter to continue...");
    }
    printf("%d\t%d\n", i, i * i);
    i++;
  }

  return 0;
}