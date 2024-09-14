#include<stdio.h>
int main(){
	int numberofdays,years,months,days;
	printf("enter a numberofdays");
	scanf("%d",&numberofdays);
	years=numberofdays/365;
	months=(numberofdays-years*365)/30;
	days=(numberofdays-years*365-months*30);
	printf("years=%d",years);
	printf("months=%d",months);
	printf("days=%d",days);
	
	
	
	
	
	
	return 0;
}
