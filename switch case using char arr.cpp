#include<stdio.h>
#include<conio.h>
int main()
{
	char n[10];
	printf("Enter Day of week as Number 1 to 7\n");
	scanf("%c",&n);
	switch(n[0])
	{
		case 'a': case 'A':
			printf("Monday\n");
			break;
		case '1*2':
			printf("Tuesady\n");
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
		case 7:
			printf("Sunady\n");
			break;
		default:
			printf("WRONG INPUT");
			break;
	}	
}
