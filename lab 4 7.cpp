#include<stdio.h>
 int main(){
	int hours,rs,total;
	printf("enter the total hours");
	scanf("%d",&hours);
	
	if(hours<=8)
	{
		rs=hours*100;
		printf("the total money get by employee is %d",rs);
		
		}	
	else if(hours>8){
		rs=800+(hours-8)*120;
	    printf("the total money get by employee is %d",rs);
		}

	 return 0;
}
