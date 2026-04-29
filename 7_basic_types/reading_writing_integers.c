#include <stdio.h>

int main(void) {

  unsigned int u;

  scanf("%u", &u);    /* reads u in base 10 */
  printf("%u", &u);   /* writes u in base 10 */

  scanf("%o", &u);    /* reads u in base 8 */
  printf("%o", &u);   /* writes u in base 8 */

  scanf("%x", &u);    /* reads u in base 16 */
  printf("%x", &u);   /* writes u in base 16 */


  return 0;
}

int short_integer(void) {

  short s;

  scanf("%hd", &s);
  printf("%hd", &s);

  return 0;
}

int long_integers(void) {

  long long_integer;

  scanf("%ld", &long_integer);
  printf("%ld", long_integer);
  return 0;
}

int long_long_integers(void) {

  long long long_long_integer;

  scanf("%lld", &long_long_integer);
  printf("%lld", long_long_integer);
  return 0;
}