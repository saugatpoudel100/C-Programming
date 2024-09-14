#include<stdio.h> 
#include<string.h>
struct student_node{
int roll ;
char name[10];
struct student_node*next;
};
 main()
{ 
  struct student_node s1;
  struct student_node s2 ={12,"xyz",NULL};
  s1.roll =10;
  strcpy(s1.name,"abc");
  s1.next=&s2;                                          // s2 node is linked to s1 node
  printf("%s",s1.name);                          //prints abc
  printf("%s",s1.next->name);             //prints  xyz
}


