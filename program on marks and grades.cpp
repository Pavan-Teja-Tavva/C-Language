#include<stdio.h>
#include<conio.h>
int main()
{
	int marks; 
	printf("Enter your marks :");
	scanf("%d",&marks);
	
	if(marks>=90)
	{
		printf("Your grade is : O");
	}
	else if(marks>= 85 && marks<90)
	{
		printf("Your grade is : A+");
	}
	else if(marks>=80 && marks<85)
	{
		printf("Your grade is : A");
	}
	else if(marks>=70 && marks<80)
	{
		printf("Your grade is : B");
	}
	else if(marks<=60 && marks<70)
	{
		printf("Your grade is : C");
	}
	else
	{
		printf("Your grade is : F");
	}
}
