#include<stdio.h>
int main(){
    union student{
        int roll;
        int marks;
    }s;
    s.roll=5;
    printf("the roll is %d:",s.roll);
    s.marks=79;
    printf("the marks is%d",s.marks);

    // s.roll=5;
    // s.marks=79;
    // printf("the roll is %d:",s.roll);
    // printf("the marks is%d",s.marks);




}