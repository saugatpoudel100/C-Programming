#include<stdio.h>
int sum(int );
int main(){
int n,s;
printf("enter a number");
scanf("%d",&n);
s=sum(n);
printf("the  sum is : %d",s);
}
int sum(int n){
    int a;
    if(n==1){
        return 1;
    }
    else{
        a=n+sum(n-1);
        return a;
    }
}