#include<stdio.h>
#include<conio.h>
int main()
{
	
	int n;
	printf("Enter Day of week as number 1 to 7\n");
	scanf("%d",&n);
	switch(n)
	{
		
		case 1:
			printf("Monday\n");
			break;
			
		case 2:
			printf("Tuesday\n");
			break;
			
		case 3:
			printf("Wednesday\n");
			break;
			
		case 4:
			printf("Thursday\n");
			break;
			
		case 5:
			printf("Friday\n");
			break;
			
		case 6:
			printf("Saturday\n");
			break;
			
		default :
			printf("Wrong input\n");
			break;
			
	}
	
	printf("Out of switch\n");
	
	getch();
}		
