#include<stdio.h>
int main(void){
int num;
printf("Enter your mark ");
scanf("%d",&num);

 
	if(num >= 80){
	printf("Excellent");
		}
	else if (num >=60){ 
		printf("first division");
		}
	else if (num >=50){
		printf(" second division");
		}
	else if(num >=40){
		printf("third division");
	}	
	else if (num >=0){
		printf("Failed");
		}
		return 0;
}

