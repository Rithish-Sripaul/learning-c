#include <stdio.h>

int main(void) {
  int n = 100, i = 2;
  
  while (i * i <= 100) {
    if ((i * i) % 2 == 0) {
      printf("%d\n", i * i);
    }
    i++;
  }

  return 0;
} 
