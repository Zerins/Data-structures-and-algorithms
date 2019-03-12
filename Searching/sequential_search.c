#include <stdio.h>

int sequential_search(const float A[], float x, int N) {
  int i;
  int notfound = -1;

  for(i = 0; i < N; i++) {
    if(x == A[i]) {
      return i;
    }
  }

  return notfound;
}
