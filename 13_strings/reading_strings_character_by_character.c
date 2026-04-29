#include <stdio.h>

#define SIZE 100

int read_line(char str[], int n);
int count_spaces(const char* p);

int main(void) {
  char str[SIZE + 1];
  int len, num_spaces;
  printf("Enter a line: ");

  len = read_line(str, SIZE);
  puts(str);

  num_spaces = count_spaces(str);
  printf("Number of Spaces: %d\n", num_spaces);

  return 0;
}

int read_line(char str[], int n) {
  char c;
  int len = 0;
  while ((c = getchar()) != '\n' && len < n - 1) {
    str[len++] = c;
  }
  str[len] = '\0';
  return len;
}

int count_spaces(const char* p) {
  int count = 0;

  for (; *p != '\0'; p++) {
    if (*p == ' ') {
      count++;
    }
  }

  return count;
}
