#include<stdio.h>
#include<conio.h>
 int main(){
 	int n[100],num,i,j,a;
 	printf("enter how many numbers\n");
 	scanf("%d",&num);
 	
 	printf("enter the number: \n");
 	for(i=0;i<num;i++)
    {
    	scanf("%d",&n[i]);
		 } 	
 	for(i=0;i<num-1;i++)
 	{
 		for(j=i+1;j<num;j++)
	 {
 	if(n[i]<n[j])
{
 a=n[i];
 n[i]=n[j];
 n[j]=a;

	 } 	
 }
}
 printf("the number in deecending order are:\n");
 for(i=0;i<num;i++)
 {
 	printf("%d\t",n[i]);
 	
 }
}
