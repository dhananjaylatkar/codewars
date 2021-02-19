#include <stdbool.h>
#include <stdio.h>

bool is_pangram(const char *str_in) {
  int alpha[26] = {0};
  while (*str_in) {
    /**
     * Tips-
     * Use a/z instead of 65/90.
     * Use tolower(*str_in) for case-insetive things.
     * strchr(str_in, x) is useful but, needs string.h
     **/
    if (*str_in >= 65 && *str_in <= 90)
      alpha[*str_in - 65] = 1;
    else if (*str_in >= 97 && *str_in <= 122)
      alpha[*str_in - 97] = 1;
    *str_in++;
  }
  int sum = 0;
  for (int i = 0; i < 26; i++)
    sum += alpha[i];
  return sum == 26 ? true : false;
}

int main() {
  if (is_pangram("The quick, brown fox jumps over the lazy dog!"))
    printf("yes\n");
  else
    printf("no\n");
  if (is_pangram("The quick, brown fox jumped over the lazy dog!"))
    printf("yes\n");
  else
    printf("no\n");
}
