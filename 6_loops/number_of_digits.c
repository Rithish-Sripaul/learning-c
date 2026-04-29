#include <stdio.h>

int main(void) {
  int n, number_of_digits = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  do {
    n /= 10;
    number_of_digits++;
  } while (n > 0);
  
  printf("Number of digits: %d\n", number_of_digits);
  
  return 0;
}