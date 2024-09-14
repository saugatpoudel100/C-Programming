#include<stdio.h>
 int main(){
 	int n[100],num,i,small;
 	printf("enter no of array: ");
    scanf("%d",&num);
 	
 	printf("enter the numbers: \n");
 	for(i=0;i<num;i++)
 	{
 		scanf("%d",&n[i]);
	 }
 	small=n[0];
 	
 	for(i=1;i<num;i++)
 	{
 		if(small>n[i])
 		 small=n[i];
	 }
 	printf("the smallest number is : %d", small);
 	
 	
 }
