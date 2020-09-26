#include<stdio.h>
#include<conio.h>
int main()
{
 int a=5,b=20,c;
 if(a&&b)
 {
 	printf("Line 1  condition is true\n ");
 }
 if(a||b)
 {
	printf("Line 2  condition is true\n");
 }

 a=0,b=10;
 if(a&&b)
 {
	printf("Line 3  condition is true\n");
 }
 else
 {
	printf("Line 3  condition is not true\n");
 }
 if( !(a&&b))
 {
	printf("Line 4  condition is true");
 }
	
}

