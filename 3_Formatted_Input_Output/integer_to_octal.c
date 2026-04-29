#include <stdio.h>
#include <stdbool.h>


int power(int number, int n) {
  
  if (n == 0) {
    return 1;
  }
  return number * power(number, n - 1);
}

int main(void) {
  int number, octal = 0;
  
  printf("Enter a number: ");
  scanf("%d", &number);

  int i = 0;
  while (number > 0) {
    octal += (number % 8) * power(10, i);
    number /= 8;
    i++;
  }

  printf("Octal number: %.5d\n", octal);
  return 0;
}