#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char choice;
clrscr();
printf("\n enter operater(+,-,*,/)");
printf("\n Enter choice");
scanf("%c",&choice);
printf("\n Enter value");
scanf("%d%d",&a,&b);
switch(choice)
   {
   case '+':
   printf("the addition is=%d",a+b);
   break;
   case '-':
   printf("the substraction is=%d",a-b);
   break;
   case '*':
   printf("the Multiphiction is=%d",a*b);
   break;
   case '/':
   printf("the divition is=%d",a/b);
   break;
   default:
   printf("invalid numner");

   }
   getch();
}


