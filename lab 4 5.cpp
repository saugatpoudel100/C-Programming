#include<stdio.h>

int main(){
    int i=1, marks, j,  div;
    //i=1; total=0;
    float total=0;
    float per;
	while(i<=5)
    {
    	
        printf("Enter Marks in Subject: ");
        scanf("%d",&marks);
        total = total + marks;
        i++;
    }
    per = total/5;
    printf(" TOTAL MARKS : %.1f\n",total);
    printf("PERCENTAGE: %.1f%%\n",per);
    if(per>=80)
    printf(" DISTINCTION\n");
    else if(per>=70)
  	printf("1ST DIVISION\n");
    else if(per>=60)
    printf("second DIVISION\n");
    else if(per>=50)
    printf("THIRD DIVISION\n");
    else
    printf("fail\n");
    return 0;
}
