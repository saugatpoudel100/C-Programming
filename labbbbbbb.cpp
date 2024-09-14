#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,d,i=0;
	printf("THE SERIES UP TO 10TH TERM:\n"); 
		while(i<=10)
		{
		printf("%d\t\t",i);
		i++;	
		} 
		printf("\n\n");
		i=0;
		while(i<=10)
		{
		 b = pow(2,i);
		printf("%d\t\t",b);
		 i++;
		 
		} i=0;
		printf("\n\n");
	 	while(i<=10)
	 	{
		c= pow(3,i);
		printf("%d\t\t",c);
		i++;
		}
		printf("\n\n");
		i=1;
		while(i<=10)
		{
		d =3*pow(i,2);
		printf("%d\t\t",d);
		i++;			
		}
}

