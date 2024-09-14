#include<stdio.h>
int main()
{
int i,exit;
char s;
printf("Enter the choice \n");
printf("A. Displays multiplication table of 7 from 1 to 10.\n");
printf("B. Display for lower and upper range to show table of 8.\n");
printf("C. Asks for lower, upper range and multiplication table number.\n");
printf("D. Exit the program\n");
scanf("%s",&s);

switch (s)
{ 
case 'a':
for(i=1;i<=10;i++)
{
	printf("%d*%d=%d \n",7,i,7*i);
}
break ;

case 'b':
int u,l;
printf("Enter the upper range \n");
scanf("%d",&u);
printf("Enter the lower range \n");
scanf("%d",&l);
for(i=l;i<=u;i++)
{
	printf("%d*%d=%d \n",8,i,8*i);
}
break ;

 case 'c':
 int n;
 printf("Enter the number for multiplication table");
 scanf("%d",&n);
 printf("Enter the upper range \n");
scanf("%d",&u);
printf("Enter the lower range \n");
scanf("%d",&l);
for(i=l;i<=u;i++)
{
	printf("%d*%d=%d \n",n,i,n*i);
}
break;

case 'd':
	exit;
break;




}



	return 0;
}
