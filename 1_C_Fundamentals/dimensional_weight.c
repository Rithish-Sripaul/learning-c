#include <stdio.h>
#define INCHES_PER_POUND 166

// Example
#define RECIPROCAL_OF_PI (1.0f / 3.14f)

int main(void) {
  int height, length, width, volume;
  float weight;


  printf("Enter the height of the box: ");
  scanf("%d", &height);
  printf("Enter the length of the box: ");
  scanf("%d", &length);
  printf("Enter the width of the box: ");
  scanf("%d", &width);
  


  volume = height * length * width;

  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

  printf("Dimensional Weight = %.2f\n", weight);
}
