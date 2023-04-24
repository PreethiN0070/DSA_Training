#include <stdio.h>
#include<stdbool.h>
int main(){
  int t;
  int s;
  int key;
  
  
int k;
  scanf("%d",&t);
  int p[10];
  for(k=0;k<t;k++){
    bool present=false;
  scanf("%d",&s);
  int a[s];
  for(int i=0;i<s;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&key);
  
for (int i = 0; i < s; i++)
if (a[i] == key){
  p[k]=i;
  present=true;
  break;
}
    if(present==false){
      p[k]=-1;
    }
  }
    for(k=0;k<t;k++){
      printf("%d",p[k]);
    }
  
  return 0;
}
