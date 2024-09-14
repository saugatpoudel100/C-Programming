#include<stdio.h>
#include<conio.h>
int main()
{
    int mat[3][3], i, j, sum;
    sum = 0;
    printf("Enter all 9 elements of 3*3 Matrix:-\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
      {
      	scanf("%d", &mat[i][j]);
	  }
		 }
		 for(i=0; i<3; i++)
    {
	 for(j=0; j<3; j++)
      {
		 if(mat[i][j]%2==0)
            {
			sum=sum+mat[i][j];
    }
	}
		}
			printf("the sum of even numbers is: %d",sum);
			
       return 0;
}
