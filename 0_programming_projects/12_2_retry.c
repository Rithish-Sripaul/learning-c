#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(void) {
  char arr[SIZE], c, *p;
  p = arr;
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      *p++ = c;
    }
  }

  char *i = arr, *j = p - 1;

  while (i < j) {
    if (*i != *j) {
      printf("Not a palindrome.\n");
      return 0;
    }
    i++;
    j--;
  }
  printf("Palidrome\n");
  return 0;
}