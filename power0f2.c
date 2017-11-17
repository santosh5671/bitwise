#include<stdio.h>
int main()
{
int num, num1,sum;
printf("Enter the number\n");
scanf("%d",&num);
printf("\nEntered number=%d\n",num);
num1=num/2;
sum=num & num1;
if(sum==0)
printf("Entered number is power of two\n");
else
printf(" Entered number is not power of two\n");
}
