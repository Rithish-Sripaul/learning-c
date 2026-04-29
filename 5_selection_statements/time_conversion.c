#include <stdio.h>

int main(void) {
  int hour, minutes, converted_hour;

  printf("Enter the time: ");
  scanf("%d:%d", &hour, &minutes);

  converted_hour = hour % 12;

  if (hour == 12) {
    printf("Converted time is: 12:%d PM\n", minutes);
  } else if (hour > 12) {
    printf("Converted time is: %d:%d PM\n", converted_hour, minutes);
  } else {
    printf("Converted time is: %d:%d AM\n", converted_hour, minutes);
  }
  return 0;
} 