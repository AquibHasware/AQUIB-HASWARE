        #include<stdio.h>
        int main()
{
        int num,rem,sum=0,temp;
        printf("enter  the number to check armstrong number");
        scanf("%d",&num);
        temp=num;
        while(num!=0)
     {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
     }
        if(num==sum)
     {
       printf("It is an armstrong number");
     }
        else
     {
       printf("It is not an armstrong number");
     }
        return (0);
}
