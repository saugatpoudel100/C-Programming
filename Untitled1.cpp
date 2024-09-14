#include <stdio.h>
int main ()
{
	int i,j,a[i][j],b[i][j],sum[i][j];
	
	printf("the two matrix is :");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
					}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++);
		{
			scanf("%d",&b[i][j]);
		}
	}
	sum[i][j]=a[i][j] + b[i][j];
	printf("the sum of matrix is %d\n,sum[i][j]");

	
	return 0;	
	
	
	
	
}
