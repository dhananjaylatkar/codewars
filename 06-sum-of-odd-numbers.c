#include <inttypes.h>
#include <stdio.h>

uint64_t rowSumOddNumbers(uint32_t n) { return (uint64_t)n * n * n; }

int main() {
  printf("%" PRIu64 "\n", rowSumOddNumbers(1));
  printf("%" PRIu64 "\n", rowSumOddNumbers(2));
  printf("%" PRIu64 "\n", rowSumOddNumbers(3));
  printf("%" PRIu64 "\n", rowSumOddNumbers(4));
  printf("%" PRIu64 "\n", rowSumOddNumbers(52248452));
}
