#include <stdio.h>

int main(void) {

  int country_digit, three_digit, four_digit;

  printf("Enter phone number: ");
  scanf("(%d)%d-%d", &country_digit, &three_digit, &four_digit);

  printf("You entered %.3d.%.3d.%.4d\n", country_digit, three_digit, four_digit);
  return 0;
}