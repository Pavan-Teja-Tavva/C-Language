//WAP to find area of mathematical objects like circle,rectangle and triangle
#include<stdio.h>
#include<conio.h>
#define pie 3.14
int main()
{
 int select;
 float len,bre,base,hei,rad,area;
 printf("select 1 (or) 2 (or) 3");
 scanf("%i",&select);
 
 switch(select)
 {
 	case 1:
 	printf("enter the value of rad :");
 	scanf("%f",&rad);
 	area = pie * rad * rad;
 	printf("area of circle is:%f",area);
 	break;
 	
 	case 2:
    printf("enter the value of len :");
    scanf("%f",&len);
    printf("enter the value of bre :");
    scanf("%f",&bre);
    area = len * bre;
    printf("area of rectangle is :%f",area);
    break;
    
    case 3:
	printf("enter the value of base :");
	scanf("%f",&base);
	printf("enter the value of hei :");
	scanf("%f",&hei);
	area = base * hei / 2;
	printf("area of triangle is :%f",area);
	break;
	
	default:
	printf("error");
	
 }
 
}
