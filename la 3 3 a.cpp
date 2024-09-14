#include<stdio.h>
int main (){
	float a,b,c;
	printf("enter two number");
	scanf("%f%f",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a is %f",a);
	printf("b is %f",b);
	
		return 0;
}
