#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a,b,c :");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("Value of a is greatest",a);
	}
	else if(b>a && b>c)
	{
		printf("Value of b is greatest",b);
	}
	else 
	{
		printf("Value of c is greatest",c);
	}
	
}
