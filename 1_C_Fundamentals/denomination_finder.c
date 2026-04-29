#include <stdio.h>

int main(void) {
  int amount, twenty_bills, ten_bills, five_bills, one_bills;
  int balance_amount;

  printf("Enter dollar amount: ");
  scanf("%d", &amount);

  twenty_bills = amount / 20;
  balance_amount = amount -  (20 * twenty_bills);

  ten_bills = balance_amount / 10;
  balance_amount = balance_amount - (10 * ten_bills);

  five_bills = balance_amount / 5;
  balance_amount = balance_amount - (5 * five_bills);

  one_bills = balance_amount;

  printf("$20 Bills: %d\n", twenty_bills);
  printf("$10 Bills: %d\n", ten_bills);
  printf("$5 Bills: %d\n", five_bills);
  printf("$1 Bills: %d\n", one_bills);
}

