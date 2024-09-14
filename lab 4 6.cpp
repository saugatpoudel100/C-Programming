#include<stdio.h>
int main(){
	int birth,age;
	printf("enter the birth year");
	scanf("%d",&birth);
	  age=2021-birth;
	  if(age>=18)
	{
		printf("you can cast vote in incoming election");
		}
	else
	{
		printf("you cannot cast vote in incoming election");
	}
	return 0;
	}
