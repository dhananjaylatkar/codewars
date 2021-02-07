#include <stddef.h>
#include <stdio.h>
#include <math.h>
size_t countBits(unsigned value){
  int len = log2(value) + 1;
  printf("%d\n", len);
  size_t res = 0;
  for (int i = 0; i < len; i++){
    if(1 & value){
      res++;
    }
    value = value >> 1;
  }
  return res;
}

int main()
{
  printf("%zu\n", countBits(10));
}
