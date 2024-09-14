#include<stdio.h>
#include<math.h>
  int main(){
  	int i,j,a,b,mat[10][10],mat1[10][10];
  	printf("enter order of matrix no of rows and no of  coloumns\n");
  	scanf("%d%d",&a,&b);
  	
  	printf("enter the element of matrix\n");
  	for(i=0;i<a;i++)
  	{
  	 for(j=0;j<b;j++)
  	 { 
  	    scanf("%d",&mat[i][j]);
	   }
	  }
  	
	  
  	printf("the  new elements is:\n");
  	for(i=0;i<a;i++)
  	{
  		for(j=0;j<b;j++)
  		{
  			mat1[i][j]=mat[i][j]+2;
		  
	  
	  	printf("%d\t",mat1[i][j]);
	  }
	  printf("\n");
  	
  	
  }
  	
  	
  	
  	
  	
  	return 0;
  }
