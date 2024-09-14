#include <stdio.h>

int main() {
    int x, r,u, i;
    
    // x - denotes input number
    // r - denotes multiplication range
    
    printf("Enter the input number is::\n");
    scanf("%d", &x);
    
    printf("\nEnter the lower range number is::\n");
    scanf("%d", &r);
    printf("\nenter the upper range number is::\n");
    scanf("%d",&u);
    

    
    for (i = 1; i <= r; i++)
		for (i =1; i >=u; i++) {
        printf("%d * %d = %d\n", x, i, x * i);
     }
    
    return 0;
}
