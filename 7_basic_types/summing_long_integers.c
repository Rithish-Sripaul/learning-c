#include <stdio.h>
#include <stdbool.h>

int main(void) {

  long sum = 0;
  printf("Enter a series of numbers: ");
  while (true) {
    long incoming_number;

    scanf("%ld", &incoming_number);

    if (incoming_number == 0) {
      break;
    }

    sum += incoming_number;
  }

  printf("Final sum: %ld\n", sum);

  return 0;
}
