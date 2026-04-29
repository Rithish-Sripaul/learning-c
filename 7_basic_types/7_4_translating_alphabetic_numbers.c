#include <stdio.h>

int main(void) {
  

  printf("Enter a phone number: ");

  int ch;
  while ((ch = getchar()) != '\n') {
    if (ch < 65 || ch > 90) {
      printf("%c", ch);
      continue;
    }

    ch = ((ch - 65) / 3) + 2;
    printf("%d", ch);
  }

  printf("\n");

  return 0;
}