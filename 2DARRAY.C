include<stdio.h>
#include<conio.h>
int add();
int sub();
int temp ,option, num_1,num_2,num_3;
void main()
{
clrscr();
printf("Enter 1 for add,2 for sub:");
scanf("%d",&temp);
printf("\nEnter a two number:");
scanf("%d%d",&num_1,&num_2);

if (option==1)
      {
	temp= add(num_1,num_2);
	printf("The add operation result is %d",temp);
      }
if (option==2)
      {
	temp=sub(num_1,num_2);
	printf("The sun operation result is %d",temp);
      }
getch();
}
int add(int a , int b)
{
return a+b;
}
int sub (int a, int b)
{
return a-b;
}
