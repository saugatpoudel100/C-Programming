#include<stdio.h>
int main(){
	int num,r,sum,x;
	  for(num=1;num<=2000;num++);
	  {
	  x=num;
	  sum=0;
	  while(x!=0)
{
	r=x%10;
	x=x/10;
	sum=sum+(r*r*r);
}
	{
	if(sum==num)
	printf("%d is armstrong",x);
			}
}
	return 0;
}
