#include <stdio.h>
#include <string.h>
int main(void)
{
	int a,b,c,d,e,exit;
	char choice;
	printf("\t\tA.MULTIPLICATION table of 7 from 1 to 10.\n\t\tB.show table of putitng range 8.\n");
	printf("\t\tC.MULTIPLICATION USING RANGE FROM HIGHER TO LOWER\n\t\tD.EXIT THE PROGRAM\n\n\n");
	printf("ENTER THE CHOICE :");
	scanf("%c",strupr(&choice));
	while(1)
	{
	switch(choice)
	{
		case 'a':
		
		for(a=1;a<=10;a++)
		  {
		  b = 7 * a;
		  printf("7 * %d = %d\n",a,b);
		  }
		  break;
		  
		case 'b':
		printf("ENTER THE UPPER RANGE :");
		scanf("%d",&c);
		printf("ENTER THE LOWER RANGE :");
		scanf("%d",&d);
		
		for(a=c;a<=d;a++)
		{
			b=8*a;
			printf("8 * %d = %d",a,b); 
		}
		break;
		
		case 'c':
		printf("ENTER A INTEGER;");
		scanf("%d",&e);	
		printf("ENTER THE UPPER RANGE :");
		scanf("%d",&c);
		printf("ENTER THE LOWER RANGE :");
		scanf("%d",&d);
		
		for(a=c;a<=d;a++)
		{
			e=b*a;
			printf("8 * %d = %d",a,b); 
		}
		break;
		  
		  case 'd':
		  exit;
}
}
return 0;
}
