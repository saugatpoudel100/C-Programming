#include <stdio.h>
#include <conio.h>
 
 int main(){
 	int a,b,c,d,e,sum;
 	float per;  
 	printf("input a");
 	scanf("%d",&a);
 	printf("input b");
 	scanf("%d",&b);	
 	printf("input c");
 	scanf("%d",&c);		
 	printf("input d");
 	scanf("%d",&d);			
 	printf("input e");
    scanf("%d",&e);
    sum=a+b+c+d+e;
    per=sum/5;
    printf("the per is %f",per);
    
	
	
    if(per>=80)
    
      printf("distincttion");

	 else if(per>=60)
	 
	 	printf("first division");
	 
    else if(per>=45)
    
    	printf("second division");
	
 	else 
    	
    printf("fail");

 	

 	
 	
 	
 	
 	
 	
 	return 0;
 }
