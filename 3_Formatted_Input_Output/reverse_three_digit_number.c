#include <stdio.h>

int main(void) {
  int number;
  int new_number;
  printf("Enter three digit number: ");
  scanf("%d", &number);

  new_number = (number % 10 * 100);
  
  number /= 10;
  new_number += (number % 10 * 10) + (number / 10);
  printf("Reverse is %d\n", new_number);

  return 0;
}