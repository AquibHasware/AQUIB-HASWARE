              #include<stdio.h>
             int main()
  { 
                int rev=0,num,temp;
                printf("\nEnetr a number to check palindrome number\n");
                scanf("%d",&num);

                temp=num;
                while(temp!=0)
           { 
                 rev=rev*10;
                 rev=rev+temp%10;
                 temp=temp/10;
           }
                 if(num==rev)
           {
                  printf("\nIt is an palindrome number");
           }
                 else
           {
                 printf("\nIt is not an palindrome number");
           }
                return 0;
}
