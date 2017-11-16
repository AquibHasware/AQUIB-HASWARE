        #include<stdio.h>
        int main()
{
        int num,rem,sum=0,temp;
        printf("Enter  the number to check armstrong number\n");
        scanf("%d",&num);
        temp=num;
        while(temp!=0)
     {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
     }
        if(num==sum)
     {
       printf("\nIt is an armstrong number");
     }
        else
     {
       printf("\nIt is not an armstrong number");
     }
        return (0);
}
