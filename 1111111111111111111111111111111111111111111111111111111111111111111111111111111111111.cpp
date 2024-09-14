#include<stdio.h>
int main (){
	int l,b,a,p,sum,square,x;
	printf("enter a length");
	scanf("%d",&l);
	printf("enter a breadth");
	scanf("%d",&b);
	printf("1 perimeter\n2 area\n3 sum of one length and one breadth\n4 square of one length and two breadth\n");
	 scanf("%d",&x);
	 	  switch(x)
		   	{
		   case 1:
	 	  	p=2*(l+b);
	 	  	printf("perimeter is %d",p);
			   break;
			   
			case 2:
			   a=l*b;
			   printf("the area is %d",a);
			   break ;
			   
			   case 3:
			   sum=l+b;
			   printf("the sum is %d",sum);
			   
			   case 4:
			   square=(l+2*b)*(l+2*b);
			   printf("the squqre is %d",&square);
	break;
		}
	 return 0;
	 }
			   
			   
			   
			   
