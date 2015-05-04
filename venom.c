#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int64;

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int64 H, P, A;
    scanf("%lld%lld%lld", &H, &P, &A);
    if (P >= H) {
      printf("1\n");
    } else {
      int64 r = ceil(((double)A - P * 1.0 / 2 + 
          sqrt((P * 1.0 / 2 - A) * (P * 1.0 / 2 - A) - 2.0 * P * (A - H))) / (double)P);
      printf("%lld\n", 2 * r - 1);
    }
  }
  return 0;
}