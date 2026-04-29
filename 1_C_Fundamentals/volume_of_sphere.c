#include <stdio.h>

#define PI 3.14f
#define SCALE_FACTOR 4.0f/3.0f

int main(void) {
  int r = 10;
  float volume = SCALE_FACTOR * PI * r * r * r;
  printf("Volume: %f", volume);
  return 0;
}