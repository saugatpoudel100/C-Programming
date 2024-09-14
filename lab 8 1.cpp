#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char name[5][10],temp[10];
int i,j;
for(i=0;i<5;i++)
{
printf("input the name of student:");
scanf("%s",name[i]);
}
for(i=0;i<5;i++)
{
for(j=i;j<5;j++)
{
if(strcmp(name[i],name[j])<0)
{
strcpy(temp,name[i]);
strcpy(name[i],name[j]);
strcpy(name[j],temp);
}
}
}
printf("\n NAme in decending order: ");
for(i=0;i<5;i++)
{
printf("%s\t",name[i]);
}
}
