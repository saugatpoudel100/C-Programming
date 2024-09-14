#include<stdio.h>
#include<conio.h>
 main(){
	int a,b,c,d,high;
	printf("input four number");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	high=a>b?high:c;
	high=high>c?high:c;
	high=high>d?high:d;
	printf("\n the highestt is %d",high);
	getch();
	
}
