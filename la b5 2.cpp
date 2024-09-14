#include<stdio.h>
main(){
	float units,charge,amount;
	printf("enter the units");
	scanf("%f",&units);
	
	if(units >=0 &&units<=200)
{
	charge=units*40;}

else if (units >=201 && units <=300){
	charge=8000+(units-200)*50;
	}
	else if (units >=301){
		charge=8000+5000+(units-300)*60;	
	
}		amount=charge+50;
		printf("the total amount is %f",amount);
}
