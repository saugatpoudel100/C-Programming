#include<stdio.h>
main(){
	int mmaths,mcomputer;
	char name[20];
	printf("enter the marks in maths");
	scanf("%d",&mmaths);
	printf("enter the marks in computer");
	scanf("%d",&mcomputer);
	printf("enter the name of student");
	scanf("%s",&name);
	
	if(mmaths>=70&mcomputer>=80)
{
	printf("you are qualified");
	}	
	else{
		printf("you are not qualified");
	}
	
	
}
