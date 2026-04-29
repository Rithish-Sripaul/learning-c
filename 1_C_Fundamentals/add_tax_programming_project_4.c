#include <stdio.h>

int main(void) {
  float money, final_amount;

  printf("Enter money: ");
  scanf("%f", &money);

  final_amount = money * 1.05;
  printf("The final amount is: %.2f\n", final_amount);
  return 0;
}