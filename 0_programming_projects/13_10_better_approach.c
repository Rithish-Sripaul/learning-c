// In my last approach, I used left_shift, which slows down the program by a lot

#include <stdio.h>

#define MAX_SIZE 100

int read_line(char arr[], int n);
void reverse_name(char* name);

int main(void) {
  char name[MAX_SIZE];
  printf("Enter first name and last name: ");
  read_line(name, MAX_SIZE);
  reverse_name(name);
  printf("%s\n", name);
  return 0;
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

void reverse_name(char* name) {
  char* p = name;
  char first_initial = '\0';
  char* last_name_start = NULL;
  int i = 0;

  while (*p == ' ') p++;
  first_initial = *p;

  while (*p != ' ' && *p != '\0') p++;
  while (*p == ' ') p++;

  if (*p == '\0') return;

  last_name_start = p;

  while (*p != '\0') {
    name[i++] = *p++;
  }

  name[i++] = ',';
  name[i++] = ' ';
  name[i++] = first_initial;
  name[i] = '\0';
}