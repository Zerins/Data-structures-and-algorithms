#include <stdio.h>

int binary_search(const float A[], float x, int N) {
  int start = 0, end = N - 1, mid, notfound = -1;

  while(start <= end) {
    mid = (start + end) / 2;
    if(x == A[mid]) {
      return mid;
    } else if(x < A[mid]) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }

  return notfound;
  }
}
