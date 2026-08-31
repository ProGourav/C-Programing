#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the Value of a: ");
scanf("%d", &a);
if(a % 2 == 0)
{
printf("Number is completely divisible by 2");
}
else
{
printf("Number is Not Completely divisible by 2");
}
getch();
}
