#include<stdio.h>
#include<string.h>
 int main(){
 	int a;
 	char str[50], n[50];
 	printf("enter any string\n");
 	gets(str);
 	strcpy(n,str);
 	strrev(n);
 	a=strcmp(n,str);
 	if (a==0)
 	printf("the string is palindrome");
 	 
 	 else
 	 printf("the string is not palindrome");
 	 return 0;
 	
 }
