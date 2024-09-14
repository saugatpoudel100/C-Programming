#include<stdio.h>
int main(){
	int bytes,mb,kb;
	printf("enter bytes");
	scanf("%d",&bytes);
	kb=bytes/1024;
	mb=bytes/1048576;
	printf("kb=%d",kb);
	printf("mb=%d",mb);
	
	
	
	
	return 0;
}
