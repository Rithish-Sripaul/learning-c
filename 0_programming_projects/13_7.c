#include <stdio.h>

int main(void) {
  int num;
  printf("Enter a two digit number: ");
  scanf("%d", &num);

  char* tens[] = {"twenty", "thirty",  "forty",  "fifty",
                  "sixty",  "seventy", "eighty", "ninety"};

  char* ones[] = {"one", "two",   "three", "four", "five",
                  "six", "seven", "eight", "nine"};
  char* teens[] = {"ten",     "eleven",  "twelve",    "thirteen", "fourteen",
                   "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

  int num_tens = num / 10;
  int num_ones = num % 10;

  printf("You entered the number ");
  if (num_tens == 1) {
    printf("%s", teens[num_ones]);
  } else {
    printf("%s", tens[num_tens - 2]);

    if (num_ones != 0) {
      printf("-%s", ones[num_ones - 1]);
    }
  }
  printf("\n");
  return 0;
}