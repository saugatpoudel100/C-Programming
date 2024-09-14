#include<stdio.h>
#include<math.h>
int main(){
   float salary,allowance,rent,gross_salary;
   
   printf("Enter Sreyan's basic salary: Rs. ");
   scanf("%f",&salary);
   allowance = (40 * salary) / 100;
   rent = (20 * salary) / 100;
   gross_salary = salary + (allowance + rent);
   
   printf("his gross_salary is %f",gross_salary);
   
   return 0;
}
