#include <stdio.h>

int main ()

{

   //int i,j,a,n,number[15];

     int i,j,a,n=5,number[15];

   /*

       printf ("\nPlease enter how many numbers you want to sort");

       scanf (""%d"", &n);

       printf ("\nPlease enter the numbers to be sorted as descending order");

       for (i=0; i<n; ++i)

       scanf ("%d",&number[i]);

   */

   number[0]=4;

   number[1]=6;

   number[2]=3;

   number[3]=7;

   number[4]=1;

 for (i=0; i<n; ++i)

 {

   for (j=i+1; j<n; ++j)

   {

     if (number[i] < number[j])

     {

       a= number[i];

       number[i] = number[j];

       number[j] = a;

     }

   }

 }

 printf ("\ndescending order of entered numbers");

 for (i=0; i<n; ++i)

 printf ("\n%d",number[i]);

}
