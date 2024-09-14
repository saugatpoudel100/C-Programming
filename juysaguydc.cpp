#include <stdio.h>
#include<math.h>
int main()
{
    int mat[m][n];
    int i,j,r,c;
     
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Coloums :");
    scanf("%d",&c);
 
    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
 
    printf("\nMatrix is :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");   /*new line after row elements*/
    }
    return 0;   
}
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  	
  }
