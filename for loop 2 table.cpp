//WAP to print the table of a number , number must be printby the user and the output format should be
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter one number :");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}
