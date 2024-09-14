#include<stdio.h>
#include<string.h>
int main(){
    char name[5][50],temp[30];
    int i ,j;
    for(i=0;i<5;i++){
        gets(name[i]);
    }

    for(i=0;i<=5;i++){
        for(j=0;j<i;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }
        }
    }

    for(i=0;i<=5;i++){
        printf("%s\t",name[i]);
    }
}