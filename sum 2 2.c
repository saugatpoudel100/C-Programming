#include<stdio.h>
int main(){
	int i,j,a[2][2],b[2][2],c[i][j];
	printf("the two matrix is :");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		scanf("%d",&b[i][j]);
    		
		}
	}
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	

 c[i][j]=a[i][j]+b[i][j];
}
}
 for(i=0;i<2;i++){
 for(j=0;j<2;j++){

 printf("%d",c[i][j]);
} 
}
 return 0;

}
