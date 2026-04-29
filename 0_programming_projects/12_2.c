#include <ctype.h>
#include <stdio.h>

#define SIZE 100

int main(void) {
  char arr[SIZE], c, *p;
  p = arr;

  printf("Enter something: ");
  while ((c = getchar()) != '\n') {
    if (isalpha(c)) {
      *p++ = c;
    }
  }

  char *i = arr, *j = p - 1;
  printf("%c, %c\n", *i, *j);

  while (i < j) {
    if (*i != *j) {
      printf("Not a palindrome.\n");
      return 0;
    }
    i++;
    j--;
  }
  printf("Palindrome.\n");
  return 0;
}