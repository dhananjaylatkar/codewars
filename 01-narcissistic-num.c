#include <math.h>
#include <stdbool.h>
#include <stdio.h>
int digits(int num) {
  int num_of_digits = 1;
  int tmp = -1;
  if(num % 10 == num) return 1;
  while (tmp != num) {
    num_of_digits++;
    tmp = num % (int)pow(10, num_of_digits);
  }
  return num_of_digits;
}
bool narcissistic(int num) {
  int num_digits = digits(num);
  printf("%d\n", num_digits);
  int sum = 0;
  for (int i = 1; i <= num_digits; i++) {
    int i_th_digit = (num / (int)pow(10, i - 1)) % 10;
    sum += pow(i_th_digit, num_digits);
  }
  printf("%d", sum);
  if(sum == num) return true;
  return false;
}

bool narcissistic_best(int num)
{
    int p = log10(num) + 1;
    int n = num;
    do
        num -= pow(n % 10, p);
    while (n /= 10);
    return !num;
}
int main() { narcissistic(7); }
