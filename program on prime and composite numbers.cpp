//WAP on prime and composite numbers
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,count=0;
	printf("enter one number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
	     count++;
        }
	}
	if(count==2)
	{
		printf("the number is prime");
	}
	else if(count==1)
	{
		printf("the number is neither prime nor composite");
	}
	else
	{
		printf("the given number is composite ");
	}
}


