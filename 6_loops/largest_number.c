#include <stdio.h>
#include <stdbool.h>

int main(void) {

  float largest_number = 0.0;

  while (true) {
    float n; 
    
    printf("Enter a number: ");
    scanf("%f", &n);

    if (n <= 0) {
      break;
    }

    largest_number = n > largest_number ? n : largest_number;
  }

  printf("The largest number is %f\n", largest_number);
  return 0;
}