#include<stdio.h>
 
main()
{
   int n;
 
   printf("Enter an integer\n");
   scanf("%d",&n);
 
   if ( n & 1 == 1 )
      printf("Odd\n");
   else
      printf("Even\n");
 
   return 0;
}
