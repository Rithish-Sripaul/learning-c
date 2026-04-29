#include <stdio.h>

#define FREEZING_PT 32
#define SCALE_FACTOR (5.0f/9.0f)

int main(void) {
  float f, c;
  printf("Enter Farenheit: ");
  scanf("%f", &f);

  c = (f - FREEZING_PT) * SCALE_FACTOR;
  printf("Celsius: %.1f\n", c);
  return 0;
}