#include<stdio.h>
 int main (){
 	int sales,commision,b=0;
 	printf("sales made by a salesman");
 	scanf("%d",&sales);
 	
 	if(20000<sales>50000)
 	{
 		commision=(sales*10/100);
 		printf("the commision is %d",commision);
 	 	 }
 	 	 else {
		   printf("no commision is made",b);
		   }
 	return 0;
 }
