#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int add (int, int);
int sub (int, int);
int mul (int, int);
int divi (int, int);

int main()
{
 int i,x,y,c;
 printf("Enter two numbers : ");
 scanf ("%d %d",&x,&y);
 printf("1. addition\n");
 printf("2. subtraction\n");
 printf("3. multiplication\n");
 printf("4. division\n");
 printf("5. exit\n\n");
 printf("Which action you want to perform : ");
 scanf ("%d",&i);
 switch(i)
 {
  case 1:
   c=add(x , y);
   printf("Answer = %d\n",c);
   system("pause");
   break;
  case 2:
   c=sub(x , y);
   printf("Answer = %d\n",c);
   system("pause");
   break;
  case 3:
   c=mul(x , y);
   printf("Answer = %d\n",c);
   system("pause");
   break;
  case 4:
   c=divi(x,y);
   printf("Answer = %d\n",c);
   system("pause");
   break;
  case 5 :
   exit(0);
   break;
  default :
   printf("Enter valid number\n");
   system("pause");
 }
}
int add(int x, int y)
{
 int c;
 c = (x+y);
 return c ;
}
int sub(int x, int y)
{
 int c;
 c = (x-y);
 printf("Answer = %d\n",c);
}
int mul(int x, int y)
{
 int c;
 c = (x*y);
 printf("Answer = %d\n",c);
}
int divi(int x, int y)
{
 int c;
 c = (x/y);
 printf("Answer = %d\n",c);
} 
