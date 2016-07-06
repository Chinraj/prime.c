#include<stdio.h>
#include<conio.h>
void main()
{
int x,b=0,i;
clrscr();
scanf("%d",&x);
if(a>=1)
{
for(i=2;i<x;i++)
{
if(x%i==0)
b++;
}
}
else
printf("Entered Invalid");
if(b==0)
printf("prime number");
else
printf("Not a Prime number");
getch();
}
