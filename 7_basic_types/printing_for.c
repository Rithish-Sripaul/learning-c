#include <stdio.h>

int main(void) {
  short i, n;

  n = 182;

  for (int i = 1; i <= n; i++) {
    printf("%d\t%d\n", i, (short) (i * i));
  }
}