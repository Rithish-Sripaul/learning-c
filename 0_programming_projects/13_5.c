#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int sum = 0;
  char* endptr;
  for (int i = 1; i < argc; i++) {
    sum += strtol(argv[i], &endptr, 10);
  }
  printf("Sum: %d\n", sum);
  return 0;
}