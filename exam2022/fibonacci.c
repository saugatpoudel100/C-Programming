#include<stdio.h>
int fibo(int n);
int main(){
    int i,terms;
    printf("enter a terms");
    scanf("%d",&terms);

    for(i=1;i<=terms;i++){
        printf("%d",fibo(i));
    }


}

int fibo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}