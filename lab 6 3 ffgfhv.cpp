#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,row;
    printf("enter a rows\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
