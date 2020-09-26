//WAP to print the average marks of five subjects
#include<stdio.h>
#include<conio.h>
int main()
{
	int S1,S2,S3,S4,S5;
	float Total,Average;
	printf("Enter the marks of Subject 1:");
	scanf("%d",&S1);
	printf("Enter the marks of Subject 2:");
	scanf("%d",&S2);
	printf("Enter the marks of Subject 3:");
	scanf("%d",&S3);
	printf("Enter the marks of Subject 4:");
	scanf("%d",&S4);
	printf("Enter the marks of Subject 5:");
	scanf("%d",&S5);
	Total = S1 + S2 + S3 + S4 + S5;
	printf("The total marks :%f\n",Total);
	Average = Total/5;
	printf("The Average is: %f",Average);
	getch();
	return 0;
}

