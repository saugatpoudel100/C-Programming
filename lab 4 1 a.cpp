#include<stdio.h>
int main (){
	float sales,commision;
	printf("the total sales made by a salesman");
	scanf("%f",&sales);
	
	if(sales>=5000)
	{
		commision=(sales*5/100);
		printf("the commision is %f",commision);
	}
else{	printf("no commision is made");
}
	
	
	
	
	
	
	
	return 0;
}
