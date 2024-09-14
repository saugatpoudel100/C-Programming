#include<stdio.h>
 #include<conio.h>
int main(){
  int a,b, temp;
  printf("Enter two numbers");
  scanf("%d%d",&a,&b);
  printf("before interchange a=%d\b=%d",a,b);
  temp=a; 
     a=b;  
	   b=temp;printf("after interchange a=%d\tb=%d",a,b);

return 0;
}
