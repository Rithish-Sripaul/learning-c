#include <stdio.h>
#include <stdbool.h>
int main(void) {
  int number_of_days = 31, starting_day = 3;

  printf("M T W Th Fr Sa Su\n");

  int current_date = 1, current_day = 0;
  bool first_week = true;

  while (current_date <= number_of_days) {
    if (first_week) {
      while (current_day != starting_day) {
        printf("  ");
        current_day++;
        first_week = false;
      }
    }
    printf("%2d ", current_date);
    current_date++;
    current_day++;

    if (current_day > 7) {
      printf("\n");
      current_day = 1;
    }
  }

  printf("\n");

  return 0;
}