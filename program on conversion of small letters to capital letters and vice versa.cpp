//WAP to enter a character from keyboard if character is letter convert to capital letter or vice versa
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter your character :");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		ch = ch + 32;
		printf("Your reqired character is :%c",ch);
	}
	else if(ch>=97 && ch<=122)
	{
		ch = ch - 32;
		printf("Your required character is :%c",ch);
	}
	else
	{
		printf("Error");
	}	
	
}

