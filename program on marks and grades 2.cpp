#include<stdio.h>
#include<conio.h>
int main()
{
	int marks,fee = 90000;
	float fee1;
	printf("Enter your marks :",marks);
	scanf("%d",&marks);
	
	if(marks>=90)
	{
		printf("Your grade is : O\n");
		printf("Your scholarship is : 40%\n");
		fee1 = fee * 40/100;
    	printf("Your fee is : %f",fee1);
	}
	else if(marks>=85 && marks<90)
	{
		printf("Your grade is : A+\n");
		printf("Your scholarship is : 35%\n");
		fee1 = fee * 35/100;
		printf("Your fee is : %f\n",fee1);
	}
	else if(marks>=80 && marks<85)
	{
		printf("Your grade is : A\n");
		printf("Your scholarship is : 30%\n");
		fee1 = fee * 30/100;
		printf("Your fee is : %f",fee1);
	}
	else if(marks>=70 && marks<80)
	{
		printf("Your grade is : B\n");
		printf("Your scholarship is 20%\n");
		fee1 = fee * 20/100;
		printf("Your fee is : %f",fee1);
	}
	else if(marks>=60 && marks<70)
	{
		printf("Your grade is : C\n");
		printf("You doesn't get scholarship\n");
		printf("Your fee is : %d",fee);
	}
	else
	{
		printf("Your grade is : F\n");
		printf("You doesn'tget scholarship\n");
		printf("You need to appear again");
	}
	getch();	
}
