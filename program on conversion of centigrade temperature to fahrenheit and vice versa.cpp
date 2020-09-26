//WAP on conversion centigrade scale to fahrenheit and vice versa
#include<stdio.h>
#include<conio.h>
int main()
{
	int select;
	float Centigrade,Fahrenheit;
	printf("select 1 for C to F (or) select 2 for F to C");
	scanf("%d",&select);
	if(select==1)
	{
	 printf("enter the  temperature in Centigrade:");
	 scanf("%f",&Centigrade);
	 Fahrenheit = Centigrade * 9/5 + 32;
	 printf("temperature in Fahrenheit:%f",Fahrenheit);
	}
	else if(select==2)
	{
	 printf("enter the temperature in Fahrenheit:");
	 scanf("%f",&Fahrenheit);
	 Centigrade = (Fahrenheit-32) * 5/9;
	 printf("temperature in Centigrade:%f",Centigrade);
	 }
	else
	{
	 printf("error");
	} 
	 
}
