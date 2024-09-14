#include<stdio.h>
int main(){
	int num,reminder,reverse_num=0,t;
	printf("enter the number");
	scanf("%d",&num);
	
	for(t=num;num!=0;num=num/10)
{
	reminder=num%10;
	reverse_num=reverse_num*10+reminder;
}
if(t==reverse_num)
{
	printf("%d is palindrome number",t);
	}	
	else{
		printf("%d is no palindrome number",t);
	}
	
	
	
	return 0;
}
