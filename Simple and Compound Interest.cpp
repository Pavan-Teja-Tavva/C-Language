//WAP on simple interest and compound interest
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float Simple_Interest,Principle,Time,Rate,Compound_Interest;
	
	printf("enter the value of principle :");
	scanf("%f",&Principle);
	printf("enter the value of time :");
	scanf("%f",&Time);
	printf("enter the value of rate :");
	scanf("%f",&Rate);
	
	Simple_Interest = Principle * Time * Rate/100;
	printf("Value of Simple Interest :%f",Simple_Interest);
	
	Compound_Interest = (Principle*(pow((1 + (Rate/100)),Time))) - Principle;
	printf("\nValue of Compound Interest :%f",Compound_Interest);
}
