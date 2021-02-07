#include <math.h>
#include <stdio.h>
int persistence(int n) {
  int res = 0;
  int len = log10(n) + 1;
  while (len > 1) {
    int mul = 1;
    for (int i = 0; i < len; i++) {
      int i_th_digit = (n / (int)pow(10, i)) % 10;
      mul *= i_th_digit;
    }
    n = mul;
    len = log10(n) + 1;
    res++;
  }
  return res;
}

int main() { printf("%d", persistence(999)); }
