#include <stdio.h>
int main(void){
	int m[20]={3,6,1,2,34,8,43,9,10,15,14,20,50,55,89,81,4,61,36,34};
	int n,i,s=0;
	printf("enter your symbol number: ");
	scanf("%d",&n);
	printf("CHECKING YOUR RESULT!!!!");
	for(i=0;i<20;i++){
		if(m[i]==n){
		s++;
	}
	}
	if(s==1){
		printf("\nYOU ARE PASS");
	}
	else
	printf("\nYOU ARAE FAIL");
}

