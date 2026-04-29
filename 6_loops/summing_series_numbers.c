#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int final_sum = 0;

  printf("Enter numbers: ");
  while (true) {
    int n;
    scanf("%d", &n);
    if (n == 0) {
      break;
    }
    final_sum += n;
  }

  printf("The sum is: %d\n", final_sum);
  return 0;
}