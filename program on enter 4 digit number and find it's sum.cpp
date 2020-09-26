//WAP to enter four digit number and find sum of digits
#include<Stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,r;
	printf("Enter 4 digit number :");
	scanf("%i",&n);
	while(n>0)
	{
	 r = n%10;
	 sum = sum + r;
	 n = n/10;
	}
	 printf("sum of digits :%i",sum);
}
