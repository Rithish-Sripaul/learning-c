#include <stdio.h>
#include <stdbool.h>
int main(void) {
  printf("Enter a first and last name: ");

  char first_initial;

  scanf(" %c", &first_initial);
  
  bool last_name_started = false;
  int c;

  while ((c = getchar()) != '\n') {
    if (c == ' ') {
      last_name_started = true;
      continue;
    }

    if (last_name_started) {
      printf("%c", c);
    } 
  }
  
  printf(", %c\n", first_initial);
  return 0;
}