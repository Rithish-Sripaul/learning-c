#include <stdio.h>
#include <string.h>

#define SIZE 100
int main(void) {
  char str_1[SIZE];
  char str_2[SIZE] = "ABC";

  strcpy(str_1, str_2);
  puts(str_1);
  str_2[1] = 'Z';
  puts(str_1);
  puts(str_2);
  return 0;
}