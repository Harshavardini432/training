#include<stdio.h>
#include<conio.h>
int a[2][2]={{6,7},{9,50}};
int i,j;
void main()
{
clrscr();
for(i=0;i<2;i++)
{
      for(j=0;i<2;i++)
      {
	     printf("arr[%d][%d]:",a[i][j]);
	     scanf("\n%d",a[i][j]);
       }
}
getch();
}
       for(i=0;i<2;i++)
{
      for(j=0;i<2;i++)
      {
	     printf("arr[%d][%d]:",a[i][j]);
	     scanf("\n%d",a[i][j]);
       }