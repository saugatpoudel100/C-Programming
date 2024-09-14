#include<stdio.h>
main(){
	int x;
	char sun[10],mon[10],tus[10],wen[10],thur[10],fri[10],sat[10];
	printf("1 sun\n 2 mon\n 3 tus\n 4 wen\n 5 thur\n 6 fri\n 7 sat\n");
	scanf("%d",&x);
	 
	switch(x)
	{ 
	case 1:
	printf("the day is sunday");
	break;
	
	case 2:
		printf("the day is monday");
		break;
		
		case 3:
			printf("the day is tusday");
			break ;
			
			case 4:
				printf("the day is wenasday");
				break ;
				
				case 5:
					printf("the day is thursday");
					break ;
					
					case 6:
						printf("the day is friday");
						break;
						
						case 7:
							printf("the day is saturday");
							break;
						}
	
}
