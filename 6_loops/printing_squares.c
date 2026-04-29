#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  int i = 1;
  while (i <= n) {
    printf("%10d%10d\n", i, i * i);
    i++;
  };
  return 0;
}