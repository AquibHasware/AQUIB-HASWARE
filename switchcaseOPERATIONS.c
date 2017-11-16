#include <stdio.h>
#include <conio.h>
main()
{
    int choice, a, b;
    int sum, div, mul, sub;
    char c= 'y';
 
    while(c=='y')
    {
         printf("\nAddition  -> 1\nSubtraction  -> 2 \nMultiplication  -> 3 \nDivision  -> 4\n");
         printf("Enter your choice of operation to perform -: \n");
         scanf("%d",& choice);
         printf("\nEnter two number :- \n");
         scanf("%d%d",&a,&b);
         switch(choice)
         {
 
              case 1: sum = a + b;
              printf("\n Sum = %d", sum);
              break;
 
              case 2: sub = a - b;
              printf("\n Difference = %d", sub);
              break;
 
              case 3: mul = a * b;
              printf("\n Multiplication = %d", mul);
              break;
 
              case 4: div = a - b;
              printf("\n Division = %d", div);
              break;
 
              default : printf("\aWRONG CHOICE");
        }
        printf("\nDo you want to continue [y / n]");
        c=getch();
    }
    getch();
