#include <stdio.h>

int main(void) {
 int k,n;
  scanf("%d",&n);
  scanf("%d",&k);
  int a[20];
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int temp;
  temp=a[n-k];
  a[n-k]=a[k-1];
  a[k-1]=temp;

  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  return 0;
}
/*#include <stdio.h>

int main(void) {
  int a[10], k, n, x, y;
  printf("Enter the array size: ");
  scanf("%d", &n);
  printf("Enter the array:");
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
  }
  printf("Enter the element position to be swapped ");
  scanf("%d", &k);
  x = a[k];
  y = a[n - k + 1];

  a[k] = y;
  a[n - k + 1] = x;

  printf("Array after swapping: ");
  for (int i = 1; i <= n; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}*/
