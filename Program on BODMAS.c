#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    int a,b;
    printf("enter a character:");
    scanf("%c",&ch);
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    if(ch=='+')
    {
    printf("%d + %d = %d",a ,b,a+b);
    }
    else if(ch=='-')
    {
    printf("%d -%d = %d",a,b,a-b);
    }
    else if(ch=='*')
    {
    printf("%d * %d = %d",a,b,a*b);
    }
    else if(ch=='/')
    {
    printf("%d / %d = %d",a,b,a/b);
    }


    else
    {
    printf("error");
    }
    getch();
    return 0;
}
