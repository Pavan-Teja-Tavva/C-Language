#include<stdio.h>
int main()
{
	int a;
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	if(a>=10)
	{
		printf("Value of a is greater than or equal to 10\n",a);
		printf("The line will executes only if condition is true\n");
			
	}

	else
	{
		printf("Value of a is less than 10\n",a);
	
	}
		printf("This value will always print");
	
}
