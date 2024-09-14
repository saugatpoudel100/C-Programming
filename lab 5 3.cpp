#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int op;
    printf(" Addition\n Subtraction\n");
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("enter op");
    scanf("%d",&op);
    switch(op)
    {
    case 1	:
        printf("Sum of %d and %d is : %d",a,b,a+b);
        break;
		
		case 2	:
        printf("Difference of %d and %d is : %d",a,b,a-b);
        break;
    default	:
        printf(" invalid operation.");
        break;
    }
    return 0;
}
