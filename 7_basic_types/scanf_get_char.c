#include <stdio.h>

int main(void) {

  int i, command;
  printf("Enter an integer: ");
  scanf("%d", &i);

  printf("Enter a command: ");
  scanf("%d", &command);

  printf("%d%d", i, command);
  return 0;
}