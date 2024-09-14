#include<stdio.h>
 int main(){
 	int n[100],i,a,sum=0;
	printf("enter how many number :");
	scanf("%d",&a);
	
	printf("enter a number\n");
 	for(i=0;i<a;i++)
 	{
	  scanf("%d",&n[i]);
	 }
	 for(i=0;i<a;i++)
	 {
	 if(n[i]>10)
	 
	 sum=sum+n[i];
    }
 
 	printf("the sum greater than 10 is: %d",sum);
 	
 	
 	
 	return 0;
 }
