#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

bool is_equal(char* str_1, char* str_2);

int main(int argc, char* argv[]) {
  char* planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                     "Saturn",  "Uranus", "Neptune", "Pluto"};
  int i, j;
  for (i = 1; i < argc; i++) {
    for (j = 0; j < NUM_PLANETS; j++) {
      if (argv[i], planets[j]) {
        printf("%s is a planet\n", argv[i]);
        break;
      }
    }
    if (j == NUM_PLANETS) {
      printf("%s is not a planet\n", argv[i]);
    }
  }
  return 0;
}

bool is_equal(char* str_1, char* str_2) {
  while (str_1 && str_2) {
    if (toupper(*str_1++) != toupper(*str_2++)) {
      return false;
    }
  }
  return true;
}