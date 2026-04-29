#include <stdio.h>
#include <stdbool.h>
int main(void) {
  int count[10] = {0};
  int n;
  bool is_repeated;
  printf("Enter a number: ");
  scanf("%d", &n);

  while (n > 0) {
    count[n % 10]++;
    n /= 10;
  }

  for (int i = 0; i < 10; i++)
  {
    if (count[i] > 1) {
      is_repeated = true;
    }
    printf("%d: %d\n", i, count[i]);
  }

  if (is_repeated) {
    printf("Repeated");
  } else {
    printf("Not repeated");
  }
  
  return 0;
}