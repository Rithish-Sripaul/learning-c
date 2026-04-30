#include <stdio.h>

#define MAX_LEN 3

int read_line(char arr[], int n);
int reverse(char *
            message);

int main(void) {
  char setence[MAX_LEN];
  read_line(setence, MAX_LEN);

  }
}

int read_line(char arr[], int n) {
  char c;
  int len = 0;

  while ((c = getchar()) != '\n' && len < n - 1) {
    arr[len++] = c;
  }

  arr[len] = '\0';
  return len;
}
