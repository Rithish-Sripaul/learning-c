#include <stdio.h>
#include <ctype.h>

int main(void) {
  int hour, minutes;
  char time_format;

  printf("Enter a 12-hour time: ");

  scanf("%d:%d %c", &hour, &minutes, &time_format);
  

  printf("%d:%d %cM\n", hour, minutes, toupper(time_format));
  return 0;
}