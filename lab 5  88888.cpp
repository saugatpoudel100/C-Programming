#include <stdio.h>
int main(void)
{
	int a,b,c,exit;
	printf("\t\t\t\t\t  MENU\n\n");
	printf("\t\t\1.SEE PRIME NUMBER FROM 1 T0 20\n \t\t2.SEE COMPOSITE NUMBER 1 TO 20\n \t\t3.EXIT FROM PROGRAM:");
	printf("\n");
	printf("\t\t\t\t\t  CHOOSE A NUMBER TO SEE ANSWER:");
	scanf("%d",&c);
	
	switch(c)
	{
		case 1:
			printf("Prime numbers are:-\n");
	for(b=1;b<=20;b++)						   
	{	
		int d=0;										
		for(c=1;c<=b;c++)
		{
			if(b%c==0)
			{
			
			d =d+1;
			}
		}
		if (d==2)
			{
			printf("%d ",b);
			}
	
		
	}
	break;
	
		case 2:
			printf("COMPOSITE numbers are:-\n");
	for(b=1;b<=20;b++)						   
	{	
		int d=0;										
		for(c=1;c<=b;c++)
		{
			if(b%c==0)
			{
			
			d =d+1;
			}
		}
		if (d>2)
			{
			printf("%d ",b);
			}
	
		
	}
	break;
		case 3:
			exit;
	}
	return 0;
	
}	
