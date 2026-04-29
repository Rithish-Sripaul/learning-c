#include <stdio.h>

int main(void) {
  int i = 1;

  printf("i is %d\n", i);
  printf("i is %d\n", i++);    /* i is 1 */

  printf("i is %d\n", i);      /* i is 2 */
  printf("i is %d\n", ++i);    /* i is 3 */

  return 0;
}