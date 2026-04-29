#include <stdio.h>

int main(void) {
  int date, month, year;


  printf("Enter a date: ");
  scanf("%2d/%2d/%4d", &month, &date, &year);

  printf("%d%2.2d%d\n", year, month, date);

  return 0;
}