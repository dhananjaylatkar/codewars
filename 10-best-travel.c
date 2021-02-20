#include <stdio.h>

int besttt = 0;

void combination(int ls[], int data[], int start, int end, int index,
                     int k, int t) {
  if (index == k) {
    int tmp_sum = 0;
    for (int j = 0; j < k; j++){
      tmp_sum += data[j];
    }
    if(tmp_sum <= t){
      if(tmp_sum > besttt) besttt = tmp_sum;
    }
    return;
  }

  for (int i = start; i <= end; i++) {
    data[index] = ls[i];
    combination(ls, data, i + 1, end, index + 1, k, t);
  }
}

int chooseBestSum(int t, int k, int ls[], int szls) {
  int data[k];
  besttt = -1;
  combination(ls, data, 0, szls-1, 0, k, t);
  return besttt;
}

int main() {
  int ts[7] = {91, 74, 73, 85, 73, 81, 87};
  printf("%d\n", chooseBestSum(163, 5, ts, 7));
}
