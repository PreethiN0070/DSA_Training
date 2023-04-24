#include <stdio.h>
#include <stdlib.h>
int compare(const void **aa, const void *bb) {
  // aa and bb are void pointers
  int n1 =
      *(int *)aa; // convert void pointer into integer poiner and deference it
  int n2 = *(int *)bb;
  return n1 - n2;
  // n1-n2 ascending
  // n2-n1 descending
}
int main() {
  int a[] = {1, 7, 4, 5, 3};                      
  qsort(a, 5, sizeof(int), compare);
  for (int i = 0; i < 5; i++) {
    printf("%d", a[i]);
  }
  return 0;
}
