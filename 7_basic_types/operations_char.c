#include <stdio.h>

int main(void) {
  int ch = 65;

  for (ch = 65; ch <= 'Z' + 20; ch++) {
    printf("%c\n", ch);
  }

  return 0;
}