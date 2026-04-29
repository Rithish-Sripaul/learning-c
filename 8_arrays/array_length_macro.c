#include <stdio.h>

#define SIZE ((int)(sizeof(a) / sizeof(a[0])))

int main(void) {
  int a[10] = {0};

  printf("%d", SIZE);
  return 0;
}