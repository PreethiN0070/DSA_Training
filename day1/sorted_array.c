#include<stdio.h>
void main(){
int n;
printf("enter n:");
scanf("%d",&n);
int arr[n];
int i=0,j;
printf("enter array:");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int temp=0;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
printf("sorted array:");
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
  printf("\n");
  for(int i=0;i<n;i++){
    if(arr[i]%2==0){
      arr[i]=1;
    }
    else{
      arr[i]=0;
    }
  }
  printf("binary array:");
  for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
