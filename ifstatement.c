#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<10)
    {
        printf("%d is less than 10\n",n);
        printf("Square = %d\n",n*n);
    }
    return 0;
}
