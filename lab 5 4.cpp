#include<stdio.h>
#include<conio.h>
int main(void){
	int d,y,m,da,kb ,mb,bytes,byte,n,num1,num2,num3,sum,reverse;
	char menu;
	printf("A. Convert the given no. of days in years, months and days\n");
	printf("B. Convert the given no. of byes in mb, kb and bytes.\n");
	printf("C. INPUT 3-digit numbers and find the sum of individual digits.\n");
	printf("D. INPUT 3-digit numbers and display the result in reverse order\n.");
	printf("ENTER THE CHOICE FROM ABOVE :");
	scanf("%c",&menu);
while(1){

	if((menu=='A') || (menu=='a'))
	printf("ENTER NO OF DAYS:");
	scanf("%d",&d);
	y = d /365;
	m = (d%365)/30;
	da = (d%365)%30 ;
	printf("TOTAL YEARS is %d,TOTAL MONTH IS %d, DAY IS  %d\n\n",y,m,da);
	break;
	
	if((menu =='B') || menu=='b')
	printf("The Number to Convert :");
	scanf("%d",&bytes);
	mb=(float) bytes/(1024*1024);
	kb = (float) ((bytes%(1024*1024))/1024);
	byte= (float) ((bytes%(1024*1024))%1024);
	printf("MB : %d\n",mb);
	printf("KB : %d\n",kb);
	printf("Bytes : %d\n\n",byte);
	break;
	
	if ((menu=='C') || (menu=='c'))
    printf("Enter the 3 digit number :");
    scanf("%d", &n);
    num1 = n / 100;
    num2 = (n % 100) / 10;
    num3 = n % 10;
    sum = num1 + num2 + num3 ;
    printf(" The sum of 3 digit %d\n\n",sum );
    break;
    
    if((menu=='D') || (menu=='d') )   
	printf("Enter the number to reverse:");
    scanf("%d", &n);
	num1 = n / 100;
    num2 = (n % 100) / 10;
    num3 = n % 10;
	reverse = num3*100+ num2*10+ num1 ;
	printf(" The reverse is %d\n\n", reverse);
	break;
	
	}
return 0;
}
