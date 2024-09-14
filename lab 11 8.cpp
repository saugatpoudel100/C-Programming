#include <stdio.h>
int main(){
	int arr[10];
	int i;int sum=0;int *ptr;ptr=&sum;
	for(i=0;i<10;i++)
		{	
			printf("Number: ");
			scanf("%d",&arr[i]);
			*ptr=*ptr+*(arr+i);
		}
		printf("Sum is %d\n",*ptr);
	return 0;
}
