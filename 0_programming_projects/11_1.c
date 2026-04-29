#include <stdio.h>

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones);

int main(void) {
  int amount, twenty_bills, ten_bills, five_bills, one_bills;
  int balance_amount;

  printf("Enter dollar amount: ");
  scanf("%d", &amount);

  pay_amount(amount, &twenty_bills, &ten_bills, &five_bills, &one_bills);

  printf("$20 Bills: %d\n", twenty_bills);
  printf("$10 Bills: %d\n", ten_bills);
  printf("$5 Bills: %d\n", five_bills);
  printf("$1 Bills: %d\n", one_bills);
}

void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones) {
  *twenties = dollars / 20;
  dollars = dollars - (20 * *twenties);

  *tens = dollars / 10;
  dollars -= 10 * *tens;

  *fives = dollars / 5;
  dollars -= 5 * *fives;

  *ones = dollars;
}
