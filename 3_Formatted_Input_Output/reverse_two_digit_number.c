#include <stdio.h>

int main(void) {
  int number;

  printf("Enter a two digit number: ");
  scanf("%d", &number);
  number = (number % 10 * 10) + (number / 10);

  printf("The reversed number is %d\n", number);
  return 0;
}