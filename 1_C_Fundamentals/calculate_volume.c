#include <stdio.h>

/* To calculate the volume of a Cube/Cuboid */

int main(void) {
  int height, width;
  float breadth, volume;

  height = 1;
  width = 2;
  breadth = 3.52f;
  volume = height * width * breadth;

  printf("Volume = %.2f\n", volume);
  return 0;
}