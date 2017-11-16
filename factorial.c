     #include<stdio.h>
    int main()
 {
    int num,i,fact=1;
    printf("enter an integer");
    scanf("%d",&num);
     for(i=1;i<=num;i++)
   {
     fact=fact*i;
   }
   printf("\nThe factorial %d is %d",num,fact);
   return 0;
 } 
