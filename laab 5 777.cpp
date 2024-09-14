#include<stdio.h>  
  
int main()  
{  
    int num, r = 1, rem, sum;  
  
    while(r <= 2000)  
    {  
        num = r;  
        sum = 0;  
  
        while(num)  
        {  
            rem = num % 10;  
            sum = sum + (rem * rem * rem);  
            num = num / 10;  
        }  
  
        if(r == sum)  
        {  
            printf("%d is a Armstrong number\n", r);  
        }  
  
        r++;  
    }  
  
     return 0;  
}  
