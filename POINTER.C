#include<stdio.h>
#include<conio.h>
int a=50;
int *p=&a;
void main()
{
clrscr();
printf("\n The value of p pointer %d",*p);
printf("\n address of p pointer %x",p);
getch();
}