#include <stdio.h>
#include<stdlib.h>
int left;
int right;
int n;
int a[20];
void swap(){
  int temp=a[left];
  a[left]=a[right];
  a[right]=temp;
}
int main(void) {

  printf("enter the size of array");
  scanf("%d",&n);



  printf("enter the array:");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
      left=0;
  right=n-1;
  while(left<=right){
if(a[left]>0 &&a[right]>0){
  right--;
}
  else if (a[left]<0 &&a[right]<0){
    left++;
  }
  else if (a[left]>0 && a[right]<0){
    swap(a[left],a[right]);
     left++;
    right--;
    }
  else if (a[left]<0 && a[right]>0){
    left++;
    right--;
  }
}
  for(int i=0;i<n;i++){
    printf("%d",a[i]);
  }
  return 0;
}
