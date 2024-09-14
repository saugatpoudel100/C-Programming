#include<stdio.h>
void calculation(int a,int b,int *s,int *d);

int main(){
    int x,y,sum,diff;
    printf("enter x and y");
    scanf("%d%d",&x,&y);
    calculation(x,y,&sum,&diff);
    printf("the sum is:%d diff is %d",sum,diff);
}
void calculation(int a,int b, int *s,int *d){
    *s=a+b;
    *d=a-b;
    // printf("the summ  and diff  is %d,%d",*s,*d);
}