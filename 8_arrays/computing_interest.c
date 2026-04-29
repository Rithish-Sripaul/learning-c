#include <stdio.h>

int main(void) {
  int num_of_interest_rates = 5, number_of_years;
  float value = 100.00, interest_rate;
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);

  printf("Enter number of years: ");
  scanf("%d", &number_of_years);

  // Array Initializing
  float yearly_interest[num_of_interest_rates];
  for (int i = 0; i < num_of_interest_rates; i++) {
    yearly_interest[i] = value;
  }


  // Header rows
  printf("Years\t");  
  for (int i = interest_rate; i <= interest_rate + 4; i++) {
    printf("%6d%%\t", i);
  }
  printf("\n");

  // Interest rates
  for (int year = 0; year < number_of_years; year++) {
    printf("%d\t", year);

    for (int i = 0; i < num_of_interest_rates; i++) {
      yearly_interest[i] += yearly_interest[i] * ((interest_rate + i) / 100);
      printf("%7.2f\t", yearly_interest[i]);
    }
    
    for (int i = 0; i < num_of_interest_rates; i++) {
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}