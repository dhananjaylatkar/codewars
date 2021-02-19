#include <stdio.h>

long zeros(long n) {
  /*****************
  It is same as counting number of 5s and 2s in
  prime factorization of n.
  Since number of 2s will be always greater than
  or equal to 5s, calculating number of 5s is enough.
  ******************/
  long count = 0;
  for (long i = 5; n / i >= 1; i *= 5)
    count += n / i;
  return count;
}

int main() { printf("10000000! has %ld trailing zeroes\n", zeros(10000000)); }
