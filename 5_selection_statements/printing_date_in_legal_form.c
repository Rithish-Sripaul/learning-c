#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int month, date, year;

  printf("Enter the date: ");
  scanf("%d/%d/%d", &month, &date, &year);

  printf("Dated this ");

  switch (date % 10) {
  case 1:
    printf("%dst", date);
    break;
  case 2:
    printf("%dnd", date);
    break;
  case 3:
    printf("%drd", date);
    break;
  default:
    printf("%dth", date);
    break;
  }

  printf(" day of ");

  switch (month)
  {
  case 1:
    printf("January, %d\n", year);
    break;
  default:
    printf("February, %d\n", year);
    break;
  }
  return 0;
}