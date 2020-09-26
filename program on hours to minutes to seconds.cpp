//WAP to ask user to enter time in hours and claculate minutes and seconds
#include<stdio.h>
#include<conio.h>
int main()
{
	int M,S;
	float H;
	printf("Enter Hours :");
	scanf("%f",&H);
	M = 60 * H;
	S = M * 60;
	printf("Your required minutes is :%i\n",M);
	printf("Your required seconds :%i",S);

}
