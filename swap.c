#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of and b \n");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("%d %d\n",a,b); 
}
