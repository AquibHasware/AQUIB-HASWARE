#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<100)
    {
        printf("%d is less than 100\n",n);
        if(n%2 == 0)
            printf("%d is even",n);
        else
            printf("%d is odd",n);
    }
    else
        printf("%d is equal to or greater than 100",n);
    return 0;
}
