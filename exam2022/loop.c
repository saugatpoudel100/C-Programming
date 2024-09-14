#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter a rows");
    scanf("%d",&rows);

// increasing
    // for(i=1;i<=rows;i++){
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }



//  decreasing
    for(i=rows;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}