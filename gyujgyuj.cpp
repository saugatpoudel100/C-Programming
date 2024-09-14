int main() 
{
	int i,j,a,n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(a=1;a<=2;a++)
	{
		for(i=1;i<=n;i++)
	    {
		   for(j=1;j<=i;j++)
		   {
			  printf("* ");
		   }
		
		  printf("\n");		
	   }
	}

	return 0;
}
