#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define SIZE 100

void reverse(char arr[], char* i, char* j);

int main(void) {
  char arr[SIZE], c, *p;
  p = arr;

  while ((c = getchar()) != '\n') {
    *p++ = c;
  }

  char *i = arr, *j = arr;

  while (i < p && j <= p) {
    if (*j == ' ' || j == p) {
      reverxse(arr, i, j);
      i = j;
    }
    j++;
  }
  printf("\n");
  return 0;
}

void reverse(char arr[], char* i, char* j) {
  char* m = j - 1;

  while (m >= i) {
    printf("%c", *m--);
  }
  printf(" ");
}