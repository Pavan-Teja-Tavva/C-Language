#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter a digit:");
	scanf("%d",&a);
	
	if(a%2==0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
	getch();
	return 0;
}
