#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// better to use qsort()

bool comp(const int *a, const int *b, size_t n) {
  int found = 0;
  int d[n];
  for (size_t j = 0; j < n; j++)
    d[j] = 1;

  for (size_t i = 0; i < n; i++) {
    int sqr = a[i] * a[i];
    for (size_t j = 0; j < n; j++) {
      if (sqr == b[j] && d[j]) {
        found = 1;
        d[j] = 0;
        break;
      }
    }
    if (!found)
      return false;
    found = 0;
  }
  return true;
}

int main() {
  int a[9] = {121, 144, 19, 161, 19, 144, 19, 11, 1008};
  int b[9] = {14641, 20736, 361, 25921, 361, 20736, 362, 121, 12340};
  if (comp(a, b, 9))
    printf("yes");
}
