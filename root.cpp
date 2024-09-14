// C Program to find the roots of a Quadratic equation

#include<stdio.h> 
#include<math.h> 

int main() 
{
    float a,b,c,dis,x1,x2;    
    printf("Enter number a: ");
    scanf("%f", &a);
    printf("Enter number b: ");
    scanf("%f", &b);
    printf("Enter number c: ");
    scanf("%f", &c);
    dis= sqrt( b*b - 4*a*c );        
     
	 if(dis>= 0)
    {
        x1 = ( -b + dis)/(2*a);
        x2 = ( -b - dis)/(2*a);
        printf("First root is %2f\n",x1);
        printf("Second root is %2f\n",x2);
    }

    else
    {
        printf("\nRoots are imaginary");
    }

    return 0;
}

