#include<stdio.h>
int fact(int n);
int main(){
    int n,ans;
    printf("enter a number");
    scanf("%d",&n);
    ans=fact(n);
    printf("the value is%d",ans);
}
int fact(int n){
    int f;
    if(n==1){
        return 1;
    }
    else{
        f=n*fact(n-1);
        return f;
    }
}