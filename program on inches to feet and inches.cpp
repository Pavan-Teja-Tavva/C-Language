#include<stdio.h>
int main()
{
	int inch1,inch2,feet;
	printf("Enter no. of inches");
	scanf("%d",&inch1);
	feet = inch1/12;
	inch2 = inch1 - (feet*12);
	printf("\n\n%d feet and %d inches",feet,inch2);
}
