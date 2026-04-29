#include <stdint.h>
#include <stdio.h>
#define NUM_DIGITS 10

int main(void) {
  int digits[NUM_DIGITS] = {0};
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  while (num > 0) {
    int digit = num % 10;
    digits[digit]++;
    num /= 10;
  }

  printf("Digit: \t\t");

  for (int i = 0; i < NUM_DIGITS; i++) {
    printf("%2d ", i);
  }
  printf("\nOccurunces: \t");
  for (int i = 0; i < NUM_DIGITS; i++) {
    printf("%2d ", digits[i]);
  }

  printf("\n");
  return 0;
}