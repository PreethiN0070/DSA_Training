#include <stdio.h>
#include<stdlib.h>
int compare(const void *aa,const void *bb){
  int n1=*(int*)aa;
  int n2=*(int*)bb;
  //return n1-n2;
  return n2-n1;
}
int main(void) {
  int a[20],n,k;
  printf("Enter the array size: ");
  scanf("%d",&n);
  printf("Enter the array: ");
  for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
  }
  qsort(a,n,sizeof(int),compare);
  printf("The array: ");
  for(int i=0;i<n;i++){
  printf("%d ",a[i]);
  }
  printf("\n");
  printf("Enter the kth largest element to be found: ");
  scanf("%d",&k);
  printf("%dth largest element is %d",k,/*a[n-k]*/a[k-1]);
  return 0;
}
