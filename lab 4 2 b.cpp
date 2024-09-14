#include<stdio.h>
main(){
	float sales,comission;
	printf("sales made by a salesman");
	scanf("%f",&sales);
	 if(sales>50000)
	{
		comission=(sales*20/100);
		printf("the comission is %f",comission);
	}
 else{
 	printf("no commision is made");
}
}
