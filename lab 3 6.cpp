#include<stdio.h>
int main (){
	float km,m,f,i,cm;
	printf("enter the distance between two cities in km");
	scanf("%f",&km);
	m=km*1000;
	f=km*3280.84;
	i=km*39370.1;
	cm=km*100000;
	printf("distance in m is %f",m);
	printf("distance in f is %f",f);
	printf("distance in i is %f",i);
	printf("distance in cm is %f",cm);
	
	return 0;
	}
	
