#include<stdio.h>
int main(){
	int num,r,sum=0,x;
	printf("enter a three digit number");
	scanf("%d",&num);
	
	for(x=num;num>0;num=num/10){
	r=num%10;
	sum=sum*10+r;
    }
	printf("the number in revers order is%d",sum);
	return 0;
}
