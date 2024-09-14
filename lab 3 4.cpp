#include<stdio.h>
#include<math.h>
int main(){
   float science,nepali,english,computer,history,total,average,percentage;
   char name[20];
   printf("Enter a name");
   scanf("%s",&name);
   printf("enter the marks of science:\n,nepali:\n,english:\n,computer:\n,history:\n");
   scanf("%f%f%f%f%f",&science,&nepali,&english,&computer,&history);
   total=science+nepali+english+computer+history;
   // calculate average marks;
   average= total / 5 ;
   //calculate percentage;
   percentage=(total / 500) * 100;
   printf("the name is %s",name);
   printf("the total is %f",total);
   printf("the average is %f",average);
   printf("the percentage is %f",percentage);
   return 0;
}
