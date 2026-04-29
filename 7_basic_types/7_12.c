#include <stdio.h>

int main(void) {
  double value, num;
  char ch;


  printf("Enter an expression: ");
  scanf("%lf", &value);
  while ((ch = getchar()) != '\n') {
    switch (ch)
    {
    case '+':
      scanf("%lf", &num);
      value += num;
      break;
    case '-': 
      scanf("%lf", &num);
      value -= num;
      break;
    case '*':
      scanf("%lf", &num);
      value *= num;
      break;
    case '/':
      scanf("%lf", &num);
      value /= num;
      break;
    default:
      break;
    }
  }

  printf("Value: %.2f\n", value);

  return 0;
}