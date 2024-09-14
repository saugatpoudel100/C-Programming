#include<stdio.h>
int main()
{
    int num,r,x;
    int sum=0;

    printf("Enter any number:");
    scanf("%d",&num);

    x=num;
    while(num!=0)
    {
        r=num%10;
        num=num/10;
        sum=sum+(r*r*r);
    }
    if(sum==x){
        printf("%d is an Armstrong number",x);
    }
	else{
        printf("%d is not an Armstrong number",x);
}
    return 0;
}
