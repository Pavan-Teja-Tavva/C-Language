//WAP to find largest of three numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the values of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>b)
	{
		printf("a is largest");
	}
	else if(b<a&&b>c)
	{
		printf("b is largest");
	}
	else
	{
		printf("c is largest");
	}
}
