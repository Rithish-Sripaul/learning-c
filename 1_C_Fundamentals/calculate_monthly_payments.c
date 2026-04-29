#include <stdio.h>

int main(void) {
  float loan_amount, interest_rate, monthly_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &loan_amount);

  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  for (int i = 0; i < 3; i++) {
    loan_amount -= monthly_payment;
    loan_amount += loan_amount * ((interest_rate/100) / 12);
    printf("Balance remaining after %d payment: %.2f\n", i, loan_amount);
  }

  return 0;
}