#include<stdio.h>
#include<conio.h>
int main()
{
	int a,sum = 0;
	printf("Enter the value of a:");
	scanf("%d",&a);
	int count = 1;
	while(!(a==-1))
	{
		sum = sum + a;
		printf("sum : %d\n",sum);
		printf("Enter -1 to terminate :");
		printf("Enter student marks :");
		scanf("%d",&a);
	}
	printf("Exiting while loop");
}
