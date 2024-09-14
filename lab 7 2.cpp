#include<stdio.h>

int main()
{
   int n,i, a[20];

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter array elements: \n");
   for(i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
   }

   for(i=0; i<n; i++)
   {
     if(a[i]%2==0)
     printf("%d: Even\n", a[i]);
     else
     printf("%d: Odd\n", a[i]);
   }

   return 0;
}
