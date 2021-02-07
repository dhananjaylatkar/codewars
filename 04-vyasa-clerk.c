#include <stdio.h>
#include <stdlib.h>
int tickets(size_t length, const int people[length]) {
  int curr = 0;
  /* int change[3] = {25, 50, 100}; */
  int count[3] = {0, 0, 0};

  for (size_t i = 0; i < length; i++) {
    if (people[i] == 25) {
      count[0]++;
      continue;
    } else if (people[i] == 50) {
      if (count[0] > 0) {
        count[0]--;
        count[1]++;
      } else {
        return 0;
      }
    } else {
      if (count[1] > 0 && count[0] > 0) {
        count[1]--;
        count[0]--;
        count[2]++;
      }
      else if (count[0] >= 3) {
        count[0] -= 3;
        count[2]++;
      }
      else {
        return 0;
      }
    }
  }
  return 1; // instead of strings "YES"/"NO" return true/false instead
}

int main() {
  int a[] = {25, 25, 50, 100};
  if (tickets(4, a)) {
    printf("yes");
  }
}
