#include<stdio.h>
#include<string.h>
int main(){
    char s[]="PROGRAMMING";
    int i,j,len;
    len=strlen(s);
    for(i=0;i<len;i++){
        for(j=0;j<=i;j++){
            // printf("%c",s[j]);
            printf("%c",s[i]);
        }
        printf("\n");
    }
    //   char s[]="PROGRAMMING";
    //   int i,j,len;
    //   len=strlen(s);
    //   for(i=len;i>=0;i--){
    //     for(j=0;j<=i;j++){
    //         printf("%c",s[i]);
    //     }
    //     printf("\n");
    //   }


}