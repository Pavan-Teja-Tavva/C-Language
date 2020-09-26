#include<stdio.h>
int main()
{
	int d=29,m=11,y=2002;
	int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int leap = 0;
	int total =0;
	//---------------------------------------------------------
	//no.of leap years calculation
	for(int i=y;i<=py;i++)
	{
		if (((i % 4 == 0) && (i % 100!= 0)) || (i%400 == 0))
			leap+=1;
	}
	//---------------------------------------------------------
	int pd,pm,py;
	printf("enter date of birth : ");
	scanf("%d",&pd);
	printf("enter month of birth : ");
	scanf("%d",&pm);
	printf("enter year of birth : ");
	scanf("%d",&py);
	year = py-y-1;
	total = 365 + leap;
	for(i=m;i<12;i++)
	{
		total = total+month[i];
	}
	total = month[m-1]-d+1;
	if
}
