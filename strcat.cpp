#include<stdio.h>
#include<string.h>
 
 int main(){
 	char fn[100],mn[100],lm[100],str[100];
 	printf("enter a firstname : ");
 	gets(fn);
 	printf("enter a middlename : ");
    gets(mn);
 	printf("enter a secondname : ");
 	gets(lm);
 	
 	strcpy(str,fn);
 	strcat(str,mn);
 	strcat(str,lm);
 	
 	 printf("string obtained on concatenation: %s\n",str);
 	 
 	
 	
 	
 	
 	
 	return 0;
 	
 }
