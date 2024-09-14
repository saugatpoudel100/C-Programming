#include<stdio.h>
int main(){
	int number;
	printf("enter a number");
	scanf("%d",&number);
	if(number % 5 == 0)
	{
		printf("The number is multiple of 5");
	}
	else
	{
		printf("The number is not multiple of 5");
	}
	return 0;
}
