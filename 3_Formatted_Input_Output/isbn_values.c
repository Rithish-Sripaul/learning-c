#include <stdio.h>

int main(void) {
  int gsi_prefix, group_indentifier, publisher_code, item_number, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_indentifier, &publisher_code, &item_number, &check_digit);

  printf("GSI Prefix: %.3d\n", gsi_prefix);
  printf("Group Indentifier: %.1d\n", group_indentifier);
  printf("Publisher code: %.3d\n", publisher_code);
  printf("Item Number: %.5d\n", item_number);
  printf("Check Digit: %.1d\n", check_digit);
}