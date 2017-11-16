#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=(int)pow(i,0.5);j++)
        {
            if(i%j==0)
            {
                printf("%d is composite\n",i);
                break;
            }    
        }
    }
    return 0;
}
