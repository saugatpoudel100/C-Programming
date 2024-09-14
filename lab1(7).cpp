#include<stdio.h>
int main (){
	int len,brd,area,perimeter;
	printf("enter the len of s rectangular");
    scanf("%d",&len);
	printf("enter the brd of a rectangular");
	scanf("%d",&brd);
	area = len * brd;
	perimeter=2*(len)+2*(brd);
	printf("area of a rectangular is %d",area);
	printf("perimeter of rectangular of is %d",perimeter);
	
	
	
	
	return 0;
}    
