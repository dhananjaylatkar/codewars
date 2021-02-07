#include <stdio.h>
#include <string.h>

char *alphabet_position(char *text) {
  // Your code here
  char *res = NULL;
  res[0] = '\0';
  for(int i = 0; i < strlen(text); i++){
    if(text[i] >= 65 && text[i] <= 90) text[i] -= 64;
    else if(text[i] >= 97 && text[i] <= 122) text[i] -= 96;
    else continue;
    char str_num[20];
    sprintf(str_num, "%d", text[i]);
    int start_idx = strlen(res);
    int end_idx = start_idx + strlen(str_num);
    int j = 0;
    for(int k = start_idx; k < end_idx; k++){
      res[k] = str_num[j];
      j++;
    }
    res[end_idx] = ' ';
    res[end_idx + 1] = '\0';

    printf("%s\n", res);
  }
  printf("\n");
  return res;
}

int main(){
  char *ptr;
  ptr = alphabet_position("The sunset sets at twelve o' clock.");
  printf("%s\n", ptr);
}
