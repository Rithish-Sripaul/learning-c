#include <stdio.h>

int calculate_exponentiation(int x, int count) {
  if (count == 0) {
    return 1;
  } 
  return x * calculate_exponentiation(x, count - 1);
}

int main(void) {
  int x, final_value;

  printf("Enter the value of x: ");
  scanf("%d", &x);

  final_value = (3 * calculate_exponentiation(x, 5));
  printf("The value of the polynomial is: %d\n", final_value);
}