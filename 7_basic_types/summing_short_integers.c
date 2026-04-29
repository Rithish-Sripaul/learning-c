// This program gives undefined output for sum value > 65,535
// This is because of short integers.
// Another program will use long integer




#include <stdio.h>
#include <stdbool.h>

int main(void) {

  short sum = 0;
  printf("Enter a series of numbers: ");
  while (true) {
    short incoming_number;

    scanf("%hd", &incoming_number);

    if (incoming_number == 0) {
      break;
    }

    sum += incoming_number;
  }

  printf("Final sum: %hd\n", sum);

  return 0;
}
