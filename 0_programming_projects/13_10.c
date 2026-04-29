#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 100

int read_name(char str[], int n);

void reverse_name_in_place(char* name);
void left_shift(char* arr);

int main(void) {
  printf("Enter a first and last name: ");

  char name[MAX_SIZE];
  read_name(name, MAX_SIZE);
  reverse_name_in_place(name);
  printf("%s\n", name);
  return 0;
}

int read_name(char str[], int n) {
  char c;
  int len = 0;
  while ((c = getchar()) != '\n' && len < n - 1) {
    str[len++] = c;
  }
  str[len] = '\0';
  return len;
}

void reverse_name_in_place(char* name) {
  bool seperator = false, first_name = false;
  char first_initial;
  while (*(name + 1)) {
    if (*name != ' ' && first_name == false) {
      first_initial = *name;
      first_name = true;
    } else if (*name == ' ' && first_name == true) {
      left_shift(name);
      break;
    }
    left_shift(name);
  }

  while (*name) {
    name++;
  }
  *name++ = ',';
  *name++ = ' ';
  *name++ = first_initial;
}

void left_shift(char* arr) {
  char* temp_pointer = arr;
  while (*temp_pointer != '\0') {
    *temp_pointer = *(temp_pointer + 1);
    temp_pointer++;
  }

  printf("%s\n", arr);
  return;
}