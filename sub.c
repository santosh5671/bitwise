#include<stdio.h>
#include<stdlib.h>

void main()
{
int a,b,sub;

printf("Enter 2 No.s : ");
scanf("%d%d",&a,&b); // Read 2 Integers

sub = a + (~b) + 1; 

printf("Sub : %d",sub);
}
