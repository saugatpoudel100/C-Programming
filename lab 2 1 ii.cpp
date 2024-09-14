#include<stdio.h>
int main(){
	int number1,number2,quotient,reminder;
	printf("enter number1");
	scanf("%d",&number1);
	printf("enter number2");
	scanf("%d",&number2);
	//calling function quotient()
	quotient=number1/number2;
	//calling function divisor()
	reminder=number1%number2;
	printf("quotient is %d",quotient);
	printf("reminder is %d",reminder);
	
	
	
	
	return 0;
}
