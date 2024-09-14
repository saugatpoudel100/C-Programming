#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,i,j,num,temp;
    printf("enter a number of terms:");
    scanf("%d",&num);
    p=(int *)calloc(num,sizeof(int));
    printf("enter a numbers ");
    for(i=0;i<num;i++){
        scanf("%d",p+i);
    }

    printf("for sorting");
    for(i=0;i<num;i++){
        for(j=0;j<i;j++){
            if(*(p+i)>*(p+j)){
              temp=*(p+i);
              *(p+i)=*(p+j);
              *(p+j)=temp;


            }
        }
    }


    printf("thee number are:");
    for(i=0;i<num;i++){
        printf("%d",*p+i);
    }

}