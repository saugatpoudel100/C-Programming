#include <stdio.h>
#include<conio.h>
#include<math.h>
 
 int main(){
 	int n,i,m;
 	float total=0,percentage;
 	 printf("enter the size of array : ");
 	 scanf("%d",&n);
 	 printf("enter  marks of subjects : ");
 	 for(i=0;i<n;i++)
     {
     	scanf("%d",&m);
       total=total+m;
   }
     percentage=(total/(n*100))*100;
	 	 
    printf("the total marks is : %f",total);
    printf("the percentage is : %f",percentage);
    
    
 	
 	
 	return 0;
 	
 }
