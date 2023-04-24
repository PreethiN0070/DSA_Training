#include<stdio.h>
#include<stdbool.h>
void main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
bool pr=false;
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        if(a[i]!=a[j]&& a[i]!=1 && a[j]!=1){
            if(a[i]%a[j]!=0)
            {
            pr=true;
        }
        else{
            pr=false;
            break;
        }                                                     
        }
    }
    if(pr){
    printf("%d ",a[i]);
}
}

}
