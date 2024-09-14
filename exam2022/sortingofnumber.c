#include<stdio.h>
int main(){
    int n[100],num,i,j,temp;
    printf("enter number");
    scanf("%d",&num);

    printf("enter the numbers?");
    for(i=0;i<num;i++){
        scanf("%d",&n[i]);

    }


    // for sorting 

    for(i=0;i<num;i++){
        for(j=0;j<i;j++){
            if(n[i]>n[j]){
                // if(n[i]<n[j]){
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
        }
    }


    printf("now");
    for(i=0;i<num;i++){
        printf("%d\t",n[i]);
    }
}