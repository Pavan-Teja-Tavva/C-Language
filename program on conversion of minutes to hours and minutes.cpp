#include<stdio.h>
int main()
{
	int min1;
	int H,min2;
	printf("Enter time in minutes : ");
	scanf("%d",&min1);
	H = min1/60;
	min2 = min1 - (H * 60);
	printf("The time is %d hours %d minutes.",H,min2);
}
