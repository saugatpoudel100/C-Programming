#include<stdio.h>
int main(){
    struct student{
        char name[50];
        int age;
        char faculty[50];
    };
    struct student s,*b;
    printf("enter a student details");
    
        scanf("%s%d%s",s.name,&s.age,&s.faculty);
  
     b=&s;
     printf("the detail in pointer");
     
       
        printf("Name:%s",b->name);
        printf("AGE:%d",b->age);
        printf("faculty:%s",b->faculty);
     
}
